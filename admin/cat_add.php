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

//上传
if($dopost=="upload")
{
    require_once(DEDEINC."/image.func.php");
    
    $uptime = time();
    $myrow = $dsql->GetOne("SELECT * FROM #@__category WHERE catname='".$catname."'");
    if($myrow)
    {
        ShowMsg('该类型名称已存在','-1');
        exit();
    }
    $inquery = "INSERT INTO `#@__category`(catname,addtime,sort)
                VALUES ('$catname','$uptime','$sort'); ";
    $dsql->ExecuteNoneQuery($inquery);
       
    ShowMsg("成功上传 1个案例类型！","cat_list.php");
    exit();
}
include DedeInclude('templets/cat_add.htm');