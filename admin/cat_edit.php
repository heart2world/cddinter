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
        $myrow = $dsql->GetOne("SELECT * FROM #@__category WHERE id='".$id."'");
        
        $msg = "成功删除一个附件！";
        $dsql->ExecuteNoneQuery("DELETE FROM #@__category WHERE id='".$id."'");
        
        ShowMsg($msg,'cat_list.php');
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
        $dsql->SetQuery("SELECT * FROM #@__category $idquery ");
        $dsql->Execute();
        
        while($myrow=$dsql->GetArray())
        {
           
            $dsql->ExecuteNoneQuery("DELETE FROM #@__category WHERE id='".$myrow['id']."'");           
        }
        ShowMsg('成功删除选定的文件！','cat_list.php');
        exit();
    }
}
/*--------------------------------
function __save_edit() //保存更改
-----------------------------------*/
else if($dopost=='save')
{
    if($id=="") exit();

    if($catname != $oldcatname)
    {
        $myrow = $dsql->GetOne("SELECT * FROM #@__category WHERE catname='".$catname."'");
        if($myrow)
        {
            ShowMsg('该类型名称已存在','-1');
            exit();
        }
    }
    //写入数据库
    $query = " UPDATE #@__category SET catname='$catname',sort='$sort'";
    $query .= " WHERE id='$id' ";
    $dsql->ExecuteNoneQuery($query);
    ShowMsg('成功更改一则案例类型！','cat_edit.php?id='.$id);
    exit();
    
    
}

//读取档案信息
$myrow = $dsql->GetOne("SELECT * FROM #@__category WHERE id='".$id."'");
if(!is_array($myrow))
{
    ShowMsg('错误，找不到此案例类型！','javascript:;');
    exit();
}

include DedeInclude('templets/cat_edit.htm');