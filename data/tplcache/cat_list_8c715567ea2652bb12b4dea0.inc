<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>">
<title>案例类型管理</title>
<link href="css/base.css" rel="stylesheet" type="text/css">
<style>
.napisdiv {left:10;top:0;width:150px;height:100px;position:absolute;z-index:3}
</style>
<script>
function ChangeImage(surl){ document.getElementById('picview').src = surl; }
function getCheckboxItem(){
   var allSel="";
   if(document.form1.aids.value) return document.form1.aids.value;
   for(i=0;i<document.form1.aids.length;i++)
   {
     if(document.form1.aids[i].checked){
       if(allSel=="")
         allSel=document.form1.aids[i].value;
       else
         allSel=allSel+","+document.form1.aids[i].value;
     }
   }
   return allSel; 
}
function AllSel(){
	for(i=0;i<document.form1.aids.length;i++){
		document.form1.aids[i].checked = true;
	}
}

function NoneSel(){
	for(i=0;i<document.form1.aids.length;i++){
		document.form1.aids[i].checked = false;
	}
}

function DelSel(){
	 var nid = getCheckboxItem();
	 if(nid==""){
		  alert("请选择项目!\r\n");
		  return ;
	 }
   
	 location.href = "cat_edit.php?dopost=del&ids="+nid;
}
</script>
</head>
<body background="images/allbg.gif" leftmargin="8" topmargin="8">
<SCRIPT language=JavaScript src="js/float.js"></SCRIPT>
<table width="98%" border="0" align="center" cellpadding="3" cellspacing="1" bgcolor="#cfcfcf">
  <tr> 
    <td height="28" colspan="7" background="images/tbg.gif">
    	<table width='96%' cellpadding='0' cellspacing='0' style="padding-left:10px;">
    		<tr>
    		<td width='30%'><b>案例类型管理</b></td>
        <td align='right'>
    	  [<a href="cat_add.php"><u>添加案例类型</u></a>]
        </td>
      </tr>
     </table>
     </td>
  </tr>
  <tr bgcolor="#ffffff" height="24"> 
    <td colspan="7">
	<table width="600" border="0" cellspacing="0" cellpadding="0">
        <form name='forms' method='post' action='cat_list.php'>
        <tr> 
          <td width="10">&nbsp;</td>
          <td width="70" align="center">关键字：</td>
          <td width="100">
          	<input name="keyword" type="text" id="keyword" style="width:100" value="<?php echo $keyword?>" />
          </td>
          <td>
          	<input class="np" name="imageField" type="image" src="images/button_search.gif" width="60" height="22" border="0" />
          </td>
        </tr>
      </form>
      </table>
    </td>
  </tr>
  <tr  bgcolor="#FBFCE2" height="24" align="center"> 
    <td width="8%">选择</td>      
    <td width="28%">案例类型名称</td>          
    <td width="15%">排序</td>      
    <td width="15%">添加时间</td>      
    <td width="15%">管理</td>
   </tr>
   <form name='form1'>
    <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
      <tr align="center" bgcolor="#FFFFFF" height="24" 
      	onMouseMove="javascript:this.bgColor='#FCFDEE';" onMouseOut="javascript:this.bgColor='#FFFFFF';"> 
        <td>
        	<input type='checkbox' name='aids' id='aids<?php echo $fields['id']; ?>' value='<?php echo $fields['id']; ?>' class='np'/>
        </td>
        <td><?php echo $fields['catname']; ?></td>
        <td><?php echo $fields['sort']; ?></td>
        <td><?php echo MyDate('Y-m-d H:i',$fields['addtime']); ?></td>
        <td>
        	<a href='cat_edit.php?id=<?php echo $fields['id']; ?>'>更改</a> 
          |
          <a href='cat_edit.php?id=<?php echo $fields['id']; ?>&dopost=del'>删除</a> 
        </td>
         </tr>
    <?php
}
}?>
  <tr bgcolor="#ffffff" height="28"> 
   <td colspan="7">
    &nbsp; <input type="button" name="b4" value="全选" class="coolbg np" style="width:40px" onClick="AllSel();" /> 
    &nbsp; <input type="button" name="b5" value="取消" class="coolbg np" style="width:40px" onClick="NoneSel();" /> 
    &nbsp; <input type="button" name="b6" value="删除所选" class="coolbg np" style="width:80px" onClick="DelSel();" />
   </td>
  </tr>
  <tr bgcolor="#F9FCEF" height="36"> 
    <td colspan="7" align="center">
    	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

    </td>
  </tr>
</form>
</table>
</td>
</tr>
</table>
</body>
</html>