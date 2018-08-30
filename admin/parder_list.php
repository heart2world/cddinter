<?php
/**
 * 合作伙伴管理
 *
 * @version        $Id: banner_list.php 1 11:17 2010年7月19日Z tianya $
 * @package        DedeCMS.Administrator
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(dirname(__FILE__)."/config.php");
require_once(DEDEINC."/datalistcp.class.php");
require_once(DEDEINC."/common.func.php");


//数据库管理
// ------------------------------------------------------------------------
if(empty($keyword)) $keyword = "";
$addsql = " WHERE (title LIKE '%$keyword%') ";
$sql = "SELECT * FROM dede_parder $addsql ORDER BY sort DESC";
$dlist = new DataListCP();
$dlist->pageSize = 20;
$dlist->SetParameter("keyword",$keyword);
$dlist->SetTemplate(DEDEADMIN."/templets/parder_list.htm");
$dlist->SetSource($sql);

$dlist->Display();

