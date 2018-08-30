<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html>
<html lang="zh-cn">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width,initial-scale=1.0,maximum-scale=1.0,minimum-scale=1.0,user-scalable=no">
    <meta http-equiv="x-ua-compatible" content="IE=edge,chrome=1">
    <title><?php echo $cfg_webname;?>-案例展示</title>
    <meta name="keywords" content="<?php echo $cfg_keywords;?>">
    <meta name="description" content="<?php echo $cfg_description;?>">
    <link rel="stylesheet" href="/include/js/style/reset.css">
    <link rel="stylesheet" href="/include/js/style/main.css">
    <script src="https://cdn.bootcss.com/html5shiv/r29/html5.min.js"></script>
    <script src="https://cdn.bootcss.com/jquery/3.2.1/jquery.min.js"></script>
    <script src="https://cdn.bootcss.com/prefixfree/1.0.7/prefixfree.min.js"></script>
    <!--[if lt IE9]><script>window.location.href='http://cdn.dmeng.net/upgrade-your-browser.html?referrer='+location.href;</script><![endif]-->
  </head>
  <body id="web-module" data-site="heart2world">
    <!--web header-->
    <header class="common-header">
      <div class="header-top">
        <a class="sitelogo" href="javascript:void(0);" title="一家专业的技术公司">
          <img src="/include/js/images/a-0-icon-logo.png" alt="logo">
        </a>
        <div class="header-text">
           <span>专业提供互联网技术服务<br>这里，每年至少诞生<i>1000</i>个优秀产品</span>
        </div>
        <div class="header-free">
            <a href="<?php echo $cfg_zixunurl;?>" target="_blank" title="有问题可以点这里">
              <button type="button">免费咨询</button>
              <p><?php echo $cfg_mobile;?></p>
            </a>
        </div>
      </div>
      <nav class="nav">
        <a href="../index.html#item1">你要的都会</a>
        <a href="../index.html#item2">价格很公道</a>
        <a href="../index.html#item3">实力挺不错</a>
        <a href="../index.html#item4">他们都找我</a>
        <a href="../cases-.html">优秀案例</a>
        <a href="#footer">赶紧联系我</a>
      </nav>
      <?php
            foreach($arcranks as $kkk=>$vvv){             
               echo " <div class='module-image' style='background-image: url({$vvv});'><a target='_blank' href='http://p.qiao.baidu.com/cps/chat?siteId=10548278&userId=23501854'><img src='{$vvv}'></a></div>\r\n";
            }
        ?>
    <!--   <div class="content-image" style="background-image: url(/include/js/images/a-5-banner.png);">
        <a href="#">
            <img src="/include/js/images/a-5-banner.png" alt="">
        </a>
      </div> -->
      <div class="case-module-title">
        <h4>优秀案例</h4>
      </div>
      <div class="filter-types">
          <h4>分 类：</h4>
          <div class="filter-list">
            <a  href="cases-.html" <?php if($catid == 0){?> class="cur" <?php }?>>全部</a>
            <?php echo $GLOBALS['optionarr']; ?>
          </div>
      </div>

    </header>
    <!--module content-->
    <!--cases-->
    <section class="common-module-part reason">
        <article class="wrap-middle-content">
          <ul class="pictures-row cases-row">
             <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
              <li class="picture-cell">
                <div class="cell-image">
                    <a href="detail-<?php echo $fields['id']; ?>-1.html" title="详情"><img src="<?php echo $fields['url']; ?>" alt="image"></a>
                </div>
                <h4><?php echo $fields['title']; ?></h4>
                <p><?php echo $fields['brief']; ?></p>
                <div class="about-me">
                    <a href="<?php echo $cfg_zixunurl;?>">我也想做成这样</a>
                </div>
              </li>
              <?php
}
}?>
              <!--  -->
          </ul>
          <div class="pages-module">
           <?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listitem'] = 'info,index,end,pre,next,pageno';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

          </div>
        </article>
      </section>

      <!--site footer-->
      <footer class="common-footer" id="footer">
          <article>
              <h4>赶紧联系我-</h4>
              <div class="online-call-me">
                  <div class="phone">
                      <img src="/include/js/images/a-0.png" alt="">
                      <p>
                          <a href="tel:<?php echo $cfg_mobile;?>">电话：<?php echo $cfg_mobile;?></a>
                      </p>
                  </div>
                  <div class="online-consult">
                      <a href="<?php echo $cfg_zixunurl;?>" target="_blank">在线咨询</a>
                  </div>
                  <div class="online-wx">
                        <img src="/include/js/images/a-0-weixin.png" alt="">
                        <p>【微信咨询】</p>
                  </div>
              </div>
          </article>
      </footer>
      <?php echo $cfg_shangwutong;?>
  </body>
</html>