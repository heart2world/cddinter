<?php
/**
 * 案例管理
 *
 * @version        $Id: media_main.php 1 11:17 2010年7月19日Z tianya $
 * @package        DedeCMS.Administrator
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(dirname(__FILE__)."/config.php");
require_once(DEDEINC."/datalistcp.class.php");
require_once(DEDEINC."/common.func.php");
require_once(DEDEINC.'/category.class.php');
$catid = isset($catid) ? intval($catid) : 0;
$tl = new Category($catid);

$optionarr = $tl->GetOptionArray($catid);
if(empty($dopost)) $dopost = '';

//数据库管理
// ------------------------------------------------------------------------
if(empty($keyword)) $keyword = "";
$addsql = " WHERE (title LIKE '%$keyword%') ";
if($catid>0)
{
    $addsql .= " AND catid='$catid' ";
}
$sql = "SELECT * FROM #@__cases  $addsql ORDER BY addtime DESC";
$dlist = new DataListCP();
$dlist->pageSize = 20;
$dlist->SetParameter("catid",$catid);
$dlist->SetParameter("keyword",$keyword);
$dlist->SetTemplate(DEDEADMIN."/templets/case_list.htm");
$dlist->SetSource($sql);
$dlist->Display();

function MediaType($tid,$nurl)
{
    if($tid==1)
    {
        return "图片<a href=\"javascript:;\" onClick=\"ChangeImage('$nurl');\"><img src='../include/dialog/img/picviewnone.gif' name='picview' border='0' alt='预览'></a>";
    }
    else if($tid==2)
    {
        return "FLASH";
    }
    else if($tid==3)
    {
        return "视频/音频";
    }
    else
    {
        return "附件/其它";
    }
}

function GetFileSize($fs)
{
    $fs = $fs/1024;
    return trim(sprintf("%10.1f",$fs)." K");
}

function UploadAdmin($adminid,$mid)
{
    if($adminid!='') return $adminid;
    else return $mid;
}