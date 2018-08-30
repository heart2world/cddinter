<?php
/**
 *
 * 案例详情
 *
 * @version        $Id: cases.php 1 15:38 2010年7月8日Z tianya $
 * @package        DedeCMS.Site
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(dirname(__FILE__)."/../include/common.inc.php");
require_once(DEDEINC.'/category.class.php');


if(empty($dopost)) $dopost = 'detail';
if($dopost == 'detail')
{
	$id = isset($id) ? intval($id) : 0;

	$dsql->SetQuery("SELECT * FROM #@__cases WHERE id=$id");
	$dsql->Execute();
	$casefos = $dsql->GetOne();
	print_r($casefos);
	//显示模板(简单PHP文件)
	include_once(DEDETEMPLATE.'/plus/case_detail.htm');
}
