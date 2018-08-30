<?php   if(!defined('DEDEINC')) exit("Request Error!");
/**
 * 分类
 *
 * @version        $Id: typelink.class.php 1 15:21 2010年7月5日Z tianya $
 * @package        DedeCMS.Libraries
 * @copyright      Copyright (c) 2007 - 2010, DesDev, Inc.
 * @license        http://help.dedecms.com/usersguide/license.html
 * @link           http://www.dedecms.com
 */
require_once(DEDEINC."/channelunit.func.php");

/**
 * 案例分类
 *
 * @package          Category
 * @subpackage       DedeCMS.Libraries
 * @link             http://www.dedecms.com
 */
class Category
{
    var $typeDir;
    var $dsql;
    var $TypeID;
    var $baseDir;
    var $modDir;
    var $indexUrl;
    var $indexName;
    var $TypeInfos;
    var $SplitSymbol;
    var $valuePosition;
    var $valuePositionName;
    var $OptionArrayList;

    //构造函数///////
    //php5构造函数
    function __construct()
    {
        $this->indexUrl = $GLOBALS['cfg_basehost'].$GLOBALS['cfg_indexurl'];
        $this->indexName = $GLOBALS['cfg_indexname'];
        $this->baseDir = $GLOBALS['cfg_basedir'];
        $this->modDir = $GLOBALS['cfg_templets_dir'];
        $this->SplitSymbol = $GLOBALS['cfg_list_symbol'];
        $this->dsql = $GLOBALS['dsql'];
        $this->TypeID = $typeid;
        $this->valuePosition = '';
        $this->valuePositionName = '';
        $this->typeDir = '';
        $this->OptionArrayList = '';
    }

    //对于使用默认构造函数的情况
    //GetPositionLink()将不可用
    function Category($typeid)
    {
        $this->__construct($typeid);
    }

    //关闭数据库连接，析放资源
    function Close()
    {
    }

    //获得类别列表
    //hid 是指默认选中类目，0 表示“请选择类目”或“不限类目”
    //oper 是用户允许管理的类目，0 表示所有类目
    //channeltype 是指类目的内容类型，0 表示不限频道
    function GetdivlistArray($hid)
    {
        return $this->GetdivlistList($hid);
    }

    function GetdivlistList($hid)
    {
        global $cfg_admin_channel;
        if(empty($cfg_admin_channel)) $cfg_admin_channel = 'all';
        
        if(!$this->dsql) $this->dsql = $GLOBALS['dsql'];
        $this->OptionArrayList = '';
      
        $query = "SELECT * FROM `#@__category` ORDER BY sort desc";        

        $this->dsql->SetQuery($query);
        $this->dsql->Execute();
        while($row=$this->dsql->GetObject())
        {
            if($row->id!=$hid)
            {                
                $this->OptionArrayList .= "<a href='../plus/cases.php?catid=".$row->id."'>".$row->catname."</a>\r\n";
            }else
            {
                 $this->OptionArrayList .= "<a class='cur' href='../plus/cases.php?catid=".$row->id."'>".$row->catname."</a>\r\n";
            }
        }
        return $this->OptionArrayList;
    }

    function GetOptionArray($hid)
    {
        return $this->GetOptionList($hid);
    }

    function GetOptionList($hid)
    {
        global $cfg_admin_channel;
        if(empty($cfg_admin_channel)) $cfg_admin_channel = 'all';
        
        if(!$this->dsql) $this->dsql = $GLOBALS['dsql'];
        $this->OptionArrayList = '';
      
        $query = "SELECT * FROM `#@__category` ORDER BY sort desc";        

        $this->dsql->SetQuery($query);
        $this->dsql->Execute();
        while($row=$this->dsql->GetObject())
        {
            if($row->id!=$hid)
            {                
                $this->OptionArrayList .= "<option value='".$row->id."'>".$row->catname."</option>\r\n";
            }else
            {
                 $this->OptionArrayList .= "<option value='".$row->id."' selected>".$row->catname."</option>\r\n";
            }
        }
        return $this->OptionArrayList;
    }

}//End Class