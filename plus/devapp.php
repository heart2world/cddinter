<?php
/**
 *
 * app开发
 *
 * @version        $Id: flink.php 1 15:38 2010年7月8日Z tianya $
 * @package        DedeCMS.Site
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(dirname(__FILE__)."/../include/common.inc.php");
require_once(DEDEINC.'/category3.class.php');
$catid = isset($catid) ? intval($catid) : 0;
$tl = new Category2($catid);
if(empty($catid))
{
	$dsql->SetQuery("SELECT * FROM #@__category order by sort desc limit 1");
	$dsql->Execute();
	$catinfo =$dsql->GetOne();
	$catid=$catinfo['id'];
}

$optionarr = $tl->GetdivlistArray($catid);

if(empty($dopost)) $dopost = '';


// 轮播图
$arcranks = array();
$dsql->SetQuery("SELECT * FROM #@__banner order by sort desc limit 5");
$dsql->Execute();
while($row=$dsql->GetArray())
{
    $arcranks[$row['id']] = $row['url'];
}

// 案例
include_once(DEDEINC.'/datalistcp2.class.php');
$dlist = new DataListCP();
$dlist->pageSize = 9;

$where ="cattype='APP' and catid='$catid'";
//案例列表
$querystring = "SELECT * FROM `#@__cases` WHERE  $where ORDER BY sort desc ";
$dlist->SetParameter('catid',$catid);
$dlist->SetTemplate(DEDETEMPLATE.'/plus/devapp_list.htm');
$dlist->SetSource($querystring);
$dlist->Display();