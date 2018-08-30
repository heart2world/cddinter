<?php
/**
 * 附件添加
 *
 * @version        $Id: media_add.php 2 15:25 2011-6-2 tianya $
 * @package        DedeCMS.Administrator
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(dirname(__FILE__)."/config.php");


//增加权限检查
if(empty($dopost)) $dopost = "";
$arcranks = array();
$dsql->SetQuery("SELECT * FROM #@__category order by sort desc ");
$dsql->Execute();
while($row=$dsql->GetArray())
{
    $arcranks[$row['id']] = $row['catname'];
}

//上传
if($dopost=="upload")
{
    require_once(DEDEINC."/image.func.php");
    $sparr_image = Array("image/pjpeg","image/jpeg","image/gif","image/png","image/x-png","image/wbmp");
    $sparr_flash = Array("application/xshockwaveflash");
    $okdd = 0;
    $uptime = time();
    $width = $height = '';
    
    for($i=0; $i<=2; $i++)
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
            
            $filename = "{$adminid}_".MyDate("His",$uptime).mt_rand(100,999).$i;
            $fs = explode(".",${"upfile".$i."_name"});
            $filename = $filename.".".$fs[count($fs)-1];
            $filename = $savePath."/".$filename;
            if(!is_dir($cfg_basedir.$savePath))
            {
                MkdirAll($cfg_basedir.$savePath,777);
                CloseFtp();
            }
            $fullfilename = $cfg_basedir.$filename;
            if($mediatype==1)
            {
                @move_uploaded_file(${"upfile".$i}, $fullfilename);
                $info = '';
                $data = getImagesize($fullfilename, $info);
                $width = $data[0];
                $height = $data[1];
                if(in_array($upfile_type, $cfg_photo_typenames)) WaterImg($fullfilename, 'up');
            }
            if($i>1)
            {
                $ntitle = $title."_".$i;
            }
            else
            {
                $ntitle = $title;
            }
            
            $inquery = "INSERT INTO `#@__cases`(title,url,brief,addtime,catid,sort,content,cattype,gongneng)
                        VALUES ('$ntitle','$filename','$brief','$uptime','$catid','$sort','$content','$cattype','$gongneng'); ";
            $okdd++;
            $dsql->ExecuteNoneQuery($inquery);
        }
    }
    ShowMsg("成功上传 {$okdd} 个文件！","case_list.php");
    exit();
}
include DedeInclude('templets/case_add.htm');