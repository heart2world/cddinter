<?php
/**
 * 附件编辑
 *
 * @version        $Id: media_edit.php 1 11:17 2010年7月19日Z tianya $
 * @package        DedeCMS.Administrator
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(dirname(__FILE__)."/config.php");

if(empty($dopost)) $dopost = "";

/*---------------------------
function __del_file() //删除附件
-----------------------------*/
if($dopost=='del')
{
    if(empty($ids))
    {
        $ids="";
    }

    if($ids=="")
    {
        $myrow = $dsql->GetOne("SELECT url FROM #@__cases WHERE id='".$id."'");
        $truefile = $cfg_basedir.$myrow['url'];
        $rs = 0;
        if(!file_exists($truefile)||$myrow['url']=="")
        {
            $rs = 1;
        } else {
            $rs = @unlink($truefile);
            //如果开启远程附件则需要同步删除文件
            if($cfg_remote_site=='Y')
            {
                if($ftp->connect($ftpconfig) && $remoteuploads == 1)
                {
                    $remotefile = str_replace(DEDEROOT, '', $truefile);
                    $ftp->delete_file($remotefile);
                }
            }
        }
        if($rs==1)
        {
            $msg = "成功删除一个附件！";
            $dsql->ExecuteNoneQuery("DELETE FROM #@__cases WHERE id='".$id."'");
        }
        ShowMsg($msg,'case_list.php');
        exit();
    } else {
        $ids = explode(',', $ids);
        $idquery = "";
        foreach($ids as $aid)
        {
            if($idquery=="")
            {
                $idquery .= " WHERE id='$aid' ";
            }
            else
            {
                $idquery .= " OR id='$aid' ";
            }
        }
        $dsql->SetQuery("SELECT id,url FROM #@__cases $idquery ");
        $dsql->Execute();
        
        //如果开启远程附件则需要同步删除文件
        if($cfg_remote_site=='Y' && $remoteuploads == 1)
        {
            $ftp->connect($ftpconfig);
        }
        while($myrow=$dsql->GetArray())
        {
            $truefile = $cfg_basedir.$myrow['url'];
            $rs = 0;
            if(!file_exists($truefile) || $myrow['url']=="")
            {
                $rs = 1;
            }
            else
            {
                $rs = @unlink($truefile);
                if($cfg_remote_site=='Y' && $remoteuploads == 1)
                {
                    $remotefile = str_replace(DEDEROOT, '', $truefile);
                    $ftp->delete_file($remotefile);
                }
            }
            if($rs==1)
            {
                $dsql->ExecuteNoneQuery("DELETE FROM #@__cases WHERE id='".$myrow['id']."'");
            }
        }
        ShowMsg('成功删除选定的文件！','case_list.php');
        exit();
    }
}
/*--------------------------------
function __save_edit() //保存更改
-----------------------------------*/
else if($dopost=='save')
{
    if($id=="") exit();

    //检测文件类型
    $addquery = "";
    require_once(DEDEINC."/image.func.php");
    $sparr_image = Array("image/pjpeg","image/jpeg","image/gif","image/png","image/x-png","image/wbmp");
    $sparr_flash = Array("application/xshockwaveflash");
    $okdd = 0;
    $uptime = time();
    $width = $height = '';
    
    for($i=1; $i<=2; $i++)
    {
        if(isset(${"upfile".$i}) && is_uploaded_file(${"upfile".$i}))
        {
            $filesize = ${"upfile".$i."_size"};
            $upfile_type = ${"upfile".$i."_type"};
            $upfile_name = ${"upfile".$i."_name"};
            $dpath = MyDate("ymd", $uptime);
            
            if(in_array($upfile_type, $sparr_image))
            {
                $mediatype = 1;
                $savePath = $cfg_image_dir."/".$dpath;
            }
            
            $newfilename = "{$adminid}_".MyDate("His",$uptime).mt_rand(100,999).$i;
            $fs = explode(".",${"upfile".$i."_name"});
            $newfilename = $newfilename.".".$fs[count($fs)-1];
            
            $newfilename = $savePath."/".$newfilename;
            if(!is_dir($cfg_basedir.$savePath))
            {
                MkdirAll($cfg_basedir.$savePath,777);
                CloseFtp();
            }
            $fullfilename = $cfg_basedir.$newfilename;
            if($mediatype==1)
            {
                @move_uploaded_file(${"upfile".$i}, $fullfilename);
                $info = '';
                $data = getImagesize($fullfilename, $info);
                $width = $data[0];
                $height = $data[1];
                if(in_array($upfile_type, $cfg_photo_typenames)) WaterImg($fullfilename, 'up');
            }
           
               
           
            $addquery = ",url='$newfilename' ";
            $okdd++;
        }
        if(empty($catid))
        {
             ShowMsg('请选择案例类型','case_edit.php?id='.$id);   
             exit();      
        }        
        //写入数据库
        $query = " UPDATE #@__cases SET title='$title',brief='$brief',catid='$catid',cattype='$cattype',gongneng='$gongneng',sort='$sort',content='$content'";
        $query .= "$addquery WHERE id='$id' ";
        $dsql->ExecuteNoneQuery($query);
        ShowMsg('成功更改一则案例！','case_edit.php?id='.$id);
        exit();
    }
    
}

//读取档案信息
$myrow = $dsql->GetOne("SELECT * FROM #@__cases WHERE id='".$id."'");
if(!is_array($myrow))
{
    ShowMsg('错误，找不到此案例！','javascript:;');
    exit();
}
$arcranks = array();
$dsql->SetQuery("SELECT * FROM #@__category order by sort desc ");
$dsql->Execute();
while($row=$dsql->GetArray())
{
    $arcranks[$row['id']] = $row['catname'];
}
include DedeInclude('templets/case_edit.htm');