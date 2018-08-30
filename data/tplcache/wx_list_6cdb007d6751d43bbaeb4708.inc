<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!doctype html>
<html lang="en">
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8">
  <meta charset="utf-8">
  <meta name="keywords" content="<?php echo $GLOBALS['cfg_keywords']; ?>">
  <meta name="description" content="<?php echo $GLOBALS['cfg_description']; ?>">
  <meta name="title" content="<?php echo $cfg_webname;?>-微信公众号开发">
  <meta name="author" content="成都迪因特科技有限公司">
  <meta name="Copyright" content="成都迪因特科技有限公司">
  <!-- <meta name="description" content=""> -->
  <!-- 让IE浏览器用最高级内核渲染页面 还有用 Chrome 框架的页面用webkit 内核-->
  <meta http-equiv="X-UA-Compatible" content="chrome=1,IE=edge">
  <!-- IOS6全屏 Chrome高版本全屏-->
  <meta name="apple-mobile-web-app-capable" content="yes">
  <meta name="mobile-web-app-capable" content="yes"> 
  <!-- 让360双核浏览器用webkit内核渲染页面 -->
  <meta name="renderer" content="webkit">
  <!-- Mobile Specific Metas-->
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no">
  <meta name="format-detection" content="telephone=no">
  <!-- CSS-->

  <link href="../public/Css/front/reset.css-version=2017120601.css"  rel="stylesheet" type="text/css">
  <link href="../public/Css/front/magicwall.css-version=2017120601.css"  rel="stylesheet" type="text/css">
  <link href="../public/Css/front/style.css-version=2017120601.css"  rel="stylesheet" type="text/css">
  <link href="../public/Css/front/style_1280.css-version=2017120601.css"  rel="stylesheet" type="text/css">
  <link href="../public/Css/front/style_1024.css-version=2017120601.css"  rel="stylesheet" type="text/css">
  <link href="../public/Css/front/style_768.css-version=2017120601-version=2017120601.css"  rel="stylesheet" type="text/css">
  <link href="../public/Css/front/style_320.css-version=2017120601.css"  rel="stylesheet" type="text/css">
  <link href="../public/Css/front/style_retina.css-version=2017120601.css"  rel="stylesheet" type="text/css">
  <link href="../public/Css/front/swiper.3.1.2.min.css-version=2017120601.css"  rel="stylesheet" type="text/css">
  <script type="text/javascript" src="../public/Js/front/jquery-1.11.1.min.js" ></script>
  <!--[if lt IE 9]>
      <script src="../public/html5shiv/r29/html5.js"></script>
  <![endif]-->
  <!-- Favicons-->
    <link rel="shortcut icon" href="/favicon.ico" type="image/vnd.microsoft.icon">
    <link rel="icon" href="/favicon.ico" type="image/vnd.microsoft.icon">
  <title><?php echo $cfg_webname;?>-微信公众号开发</title>
</head>
<body class="bg-tu">
  <div class="container">
    <div id="layout-css-1" style="display: none;"><style type="text/css">.carousel-partners .eachrow{width:201px;}</style></div>
    <div id="layout-css-2" style="display: none;"><style type="text/css">.banner_list{width:1357px;}</style></div>
    
  <header class="ai-header" id="ai-header">
  <div class="ai-nav-wrap">
    <div class="ai-nav">
      <a href="../index.php"><div class="ai-logo"></div></a>
      <div class="ai-imlink">
        <i class="tel_icon">在线咨询</i><a href="tel:400-875-188" style="color:#fff;">400-785-188</a>
      </div>
      <div class="sidebtn"></div>
      <div class="qq_top_nav">
        <div class="qq_box">
          <div class="img_qq_control img_qq_pic icon_qq"></div>
        </div>
        <div class="qq_tips_wrap">
          <p>商务顾问：1283071085</p>
          <p>技术顾问：870187080</p>
        </div>
      </div>
      <div class="ai-nav-list">
        <div class="ai-nav-redLine"><!-- 这个预留了一个滚动条接口 --></div>
        <a href="../index.php#index_top"  class="ai-nav-listitem cur" toelem="index_top">首页</a>
        <a href="../index.php#index_serve"  class="ai-nav-listitem " toelem="index_serve">服务项目</a>
        <a href="../index.php#index_case"  class="ai-nav-listitem " toelem="index_case">客户案例</a>
        <a href="../index.php#index_news"  class="index_news ai-nav-listitem " toelem="index_news">新闻资讯</a>
        <a href="../index.php#index_team"  class="ai-nav-listitem " toelem="index_about">团队介绍</a>
        <a href="../index.php#index_contact"  class="ai-nav-listitem " toelem="index_contact">联系我们</a>
      </div>
    </div>
  </div>
</header> 
   <div class="ai-banner-wrap ai-eachcont" id="index_top" nav_index="0">
        <div class="ai-banner-frame clearfix">
            <!--首屏Banner   not-active / active -->
            <?php
                foreach($arcranks as $kk=>$vv){     
                   echo "<div class='banner_list ai-banner-{$kk}' style='background: url({$vv}) no-repeat center center;background-size:cover;' ></div>\r\n";
                }
             ?>
        </div>
        
        <!-- ai banner controller -->
        <ul class="ai-banner-pages fix_3px_spc"></ul>
        <div class="ai-banner-prev font-icons"><span></span></div>
        <div class="ai-banner-next font-icons"><span></span></div>
    </div>
    <!-- *********************************** 
        微信
    *********************************** -->
    <div class="ai-eachcont con-wite" id="index_serve" nav_index="1">
        <section class="business active">
            <div class="box" style="height:auto">
                <div class="ecpadding_1 txa_c">
                    <h2 class="title-big" style="font-size: 36px;">模板：各式各样皆有 总有一款满足您</h2>
                    <h3 class="title-small">模板风格：淘宝、京东、苏宁、唯品会等主流电商风格皆收录其中<br/>功能：分销、抽奖活动、拼团等主流营销功能全面覆盖</h3>
                </div>
                <ul class="items list-inline" style="text-align: center;">
                    <li class="app">
                        <u class="cl"></u>
                        <u class="cr"></u>
                        <i>
                        </i>
                        <strong>官网公众号</strong>
                        <div>多种模式轻松搭建
                            <br>一键生成，三秒上线</div></li>
                    <li class="sys">
                        <u class="cl"></u>
                        <u class="cr"></u>
                        <i>
                        </i>
                        <strong>电商公众号</strong>
                        <div>拖拽式商城
                            <br>移动电商首选</div></li>
                    <li class="pc">
                        <u class="cl"></u>
                        <u class="cr"></u>
                        <i>
                        </i>
                        <strong>预约公众号</strong>
                        <div>企业高端定制网站设计
                            <br>公众号预约到店服务</div></li>
                    <li class="mobi">
                        <u class="cl"></u>
                        <u class="cr"></u>
                        <i>
                        </i>
                        <strong>多门店公众号</strong>
                        <div>定制手机网站 / 微网站制作
                            <br>连锁商超、线下分销、同城平台</div></li>
                    <li class="host">
                        <u class="cl"></u>
                        <u class="cr"></u>
                        <i>
                        </i>
                        <strong>外卖公众号</strong>
                        <div>公众号线上下单
                            <br>线下送达</div></li>
              <li class="pc">
                        <u class="cl"></u>
                        <u class="cr"></u>
                        <i>
                        </i>
                        <strong>餐饮公众号</strong>
                        <div>到店支付、排队点餐、
                            <br>小票打印</div></li>
                    <li class="mobi">
                        <u class="cl"></u>
                        <u class="cr"></u>
                        <i>
                        </i>
                        <strong>营销公众号</strong>
                        <div>公众号营销，传播利器</div></li>
                    <li class="host">
                        <u class="cl"></u>
                        <u class="cr"></u>
                        <i>
                        </i>
                        <strong>分销公众号</strong>
                        <div>三级返佣、无限裂变、
                        <br>低成本快速获客</div></li>
                </ul>
                <!-- <label></label> -->
            </div>
        </section>
        <div class="con_rank_title">
            <h3 style="color:#333; font-size: 36px;">上百个功能，打造营销组合拳，拳拳打到客户心坎上</h3>
            <h5>除了基础商城的商品展示、在线购买、发货、物流信息等功能外<br/>更有诸多营销功能，一年四季都是营销狂欢日</h5>
        </div>
        <div class="flow-case-con six_row_sprit pad_tb_42">
            <div class="sprows">
                <div class="txa_c spricon">
                    <div class="circle-icon circle-icon-2 ci-4"></div>
                </div>
                <div class="txa_c sprdetal">
                    <div class="trdcon">
                        <h2 class="title-medium trd-title">电销商城</h2>
                        <div class="trd-detal">
                            <p>门店展示、商品展示<br/>活动展示</p>
                        </div>
                    </div>
                </div>
            </div>
            <div class="sprows">
                <div class="txa_c spricon">
                    <div class="circle-icon circle-icon-2 ci-1"></div>
                </div>
                <div class="txa_c sprdetal">
                    <div class="trdcon">
            <h2 class="title-medium trd-title">抽奖活动</h2>
                        <div class="trd-detal">
                            <p>大转盘、刮刮卡、<br/>大礼包等</p>
                        </div>
                    </div>
                </div>
            </div>
            <div class="sprows">
                <div class="txa_c spricon">
                    <div class="circle-icon circle-icon-2 ci-5"></div>
                </div>
                <div class="txa_c sprdetal">
                    <div class="trdcon">
                        <h2 class="title-medium trd-title">三级分销</h2>
                        <div class="trd-detal">
                            <p>关联上下级、设定返<br/>佣、设定级数等</p>
                        </div>
                    </div>
                </div>
            </div>
            <div class="clear case-sprit-line">&nbsp;</div>
            <div class="sprows">
                <div class="txa_c spricon">
                    <div class="circle-icon circle-icon-2 ci-6"></div>
                </div>
                <div class="txa_c sprdetal">
                    <div class="trdcon">
                        <h2 class="title-medium trd-title">会员积分</h2>
                        <div class="trd-detal">
                            <p>积分抽奖、活动积分、<br/>积分兑换等</p>
                        </div>
                    </div>
                </div>
            </div>
            <div class="sprows">
                <div class="txa_c spricon">
                    <div class="circle-icon circle-icon-2 ci-7"></div>
                </div>
                <div class="txa_c sprdetal">
                    <div class="trdcon">
                        <h2 class="title-medium trd-title">卡券</h2>
                        <div class="trd-detal">
                            <p>折扣券、储值卡、抵用<br/>券、活动券等</p>
                        </div>
                    </div>
                </div>
            </div>
            <div class="sprows">
                <div class="txa_c spricon">
                    <div class="circle-icon circle-icon-2 ci-8"></div>
                </div>
                <div class="txa_c sprdetal">
                    <div class="trdcon">
                        <h2 class="title-medium trd-title">互动促销</h2>
                        <div class="trd-detal">
                            <p>一元购、拼团、微红<br/>包、团购等</p>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>

    <!-- *********************************** 
        案例
    *********************************** -->
    <div class="ai-eachcont con-black case-grid-wrap" id="index_case" nav_index="2">
        <div class="con_rank_title">
            <h2>C</h2>
            <h4>CASE</h4>
            <h3>案例</h3>
      <h4 style="font-size: 14px; font-weight: 400;">可直接扫码体验哦~</h4>
            <!-- <div class="title">案例展示<a href="#"  class="more">查看更多</a></div> -->
        </div>
    <!--案例下导航按钮-->
        <ul class="c_nav clearfix">
            <?php echo $optionarr;?>
        </ul>
        <!--九宫格图片-->
            <ul class="case_img clearfix" id="main_<?php echo $catid;?>">
                <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
                    <li class="img_nav">
                        <a href="" class="nav_a clearfix">
                            <img src="<?php echo $fields['url']; ?>" onerror="no_pic(this);" />
                            <div class="case_bg">
                            <div class="case-box">
                               <!--  <h4>名称：[field:title /]</h4>
                                <h4>类型：[field:catname /]</h4> -->
                                <h4>功能：<?php echo $fields['gongneng']; ?></h4>
                            </div>
                        </div>
                        </a>
                    </li>
                <?php
}
}?>                       
            </ul>
                
        <!--移动设备显示-->
                <ul class="case_deputy mid_hide case_show" id="mid_1">
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/89.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/89" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2018-01/20180123113354_69709.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2018-01/20180123113354_69709.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>共享玩具-全球玩具买手共享APP</h4>
                        <span></span>
                        <p>共享玩具APP-无锡魔玩科技智造，是提供全球玩具共享租赁的一个平台，想玩就玩，想换就换。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/70.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/70" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-04/20170421214329_79262.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-04/20170421214329_79262.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>艺术互动-私人订制交易平台</h4>
                        <span></span>
                        <p>艺术互动-艺术私人订制在线交易平台</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/91.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/91" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2018-01/20180123160626_28585.png" tppabs="https://beyondin.com/Uploads/image/article/thumb/2018-01/20180123160626_28585.png" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>赞赏社-社区互动付费阅读应用</h4>
                        <span></span>
                        <p>赞赏社是一个新潮的ACG平台，专注二次元和三次元的交流互动平台。动漫、游戏、cos、轻小说满足你全方位的二次元需求。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/9.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/9" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-08/20160812152607_16656.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-08/20160812152607_16656.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>朵拉管家-智能云物联管家</h4>
                        <span></span>
                        <p>朵拉管家APP是一款私人管家级别的全能型应用。是与朵拉魔盒配对的手机APP(用户购买朵拉后即可购买)。能够通过语音和文字消息的方式，按需提供您周边100多类O2O及其他一切私人管家服务：话费充值、外卖服务、社区服务、超市购物、家政服务、出行打车等。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/92.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/92" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2018-01/20180123161217_48192.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2018-01/20180123161217_48192.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>天诚物业-社区物业家政服务平台</h4>
                        <span></span>
                        <p>天诚物业APP是山东沂蒙建设集团旗下的一款社区物业服务平台，集房产交易、物业缴纳、社区报修、家政服务、社区团购等功能为一体。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/90.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/90" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2018-01/20180123114225_76621.png" tppabs="https://beyondin.com/Uploads/image/article/thumb/2018-01/20180123114225_76621.png" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>暖立方云孵化-智能控制孵化APP</h4>
                        <span></span>
                        <p>暖立方云孵化，是一款智能孵化管理应用，实现以下核心功能：远程监控可对设备实时控制温度、湿度、翻蛋、换气、孵化天数和孵化模式切换；消息提醒可实时上传数据，高温等异常情况实时报警；设备管理可一台手机控制多台设备。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/88.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/88" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-11/20171107152034_47938.png" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-11/20171107152034_47938.png" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>微信小程序-仓仓购</h4>
                        <span></span>
                        <p>仓仓购是一款微信小程序-超值低价销售名牌产品的购物系统。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/71.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/71" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-08/20170823150309_59237.png" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-08/20170823150309_59237.png" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>创享-园区孵化器服务App</h4>
                        <span></span>
                        <p>创享APP由银江集团亲力打造。
创享提供以下服务：空间服务，创业导师，企业注册，银行开户，财务代理，税务代理，投融资服务，项目申报，知识产权，法律服务，人力资源，营销推广，品牌文化，团队建设，企业文化等各类企业服务，自由选择，一键下单，立即服务。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/79.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/79" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-06/20170627213722_48263.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-06/20170627213722_48263.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>挖配机城-挖掘机互动交易平台</h4>
                        <span></span>
                        <p>挖配机城：集二手挖掘机买卖，配件商城，招聘求职为一体。免费发布、免费入住、免费咨询、方便的二手挖掘机买卖平台。</p>
                    </div>
                </a>
            </li>
                        <!-- <div class="case_more">
                <a href="/FrontCase/case_list/case_type/1" class="case_more_link">>&nbsp;查看更多</a>
            </div> -->
        </ul>
                <ul class="case_deputy mid_hide" id="mid_2">
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/81.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/81" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-07/20170705165218_63626.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-07/20170705165218_63626.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>创意有范-创意品众筹、互动、交易平台</h4>
                        <span></span>
                        <p>创意有范是集创意类设计作品、交流互动、产品众筹、产品交易的综合性电商自媒体平台。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/75.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/75" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-06/20170620105751_99292.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-06/20170620105751_99292.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>店都-全域生活服务共享平台</h4>
                        <span></span>
                        <p>店都是由浙江店易隆网络科技有限公司打造的全域生活服务共享平台。入驻平台的商家通过平台为终端用户提供个人生活消费、购物、社交、娱乐等全方位的服务内容；突破传统平台、商家和用户三者之间单纯的交易关系，店都平台是把所有平台的合作商家和用户从平台的使用者变成了合作者与受益者。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/41.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/41" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-08/20160823101726_68860.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-08/20160823101726_68860.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>化工邦-医药化工人脉社交</h4>
                        <span></span>
                        <p>化工邦，专注于医药化工互联网实名人脉社交和资源对接。致力于通过技术、项目开发、生产、投融资等化工人的人脉社交，打破传统生产制造和研发的束缚，让医药化工研发创新、生产制造、市场推广变得更加简单；
通过互联网+让相关从业人员可以在化工邦的平台上享受自由而且专注的交流资源共享，打造一个属于自己的医药化工城邦和国度</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/21.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/21" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-06/20160614201133_67281.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-06/20160614201133_67281.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>爱因宝母婴电商全球购</h4>
                        <span></span>
                        <p>爱因宝母婴电商平台提供全球境外购，商城购买等基本服务，详情体验公众号“爱因宝母婴”</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/85.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/85" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-07/20170705213016_13022.png" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-07/20170705213016_13022.png" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>衍无极-电商直销网站</h4>
                        <span></span>
                        <p>衍无极电商直销平台：专注于健康饮水理念科普，稀有水资源萃取与推广，好水治病公益生态链打造，水生态保护全球推广。为创业者提供中央IT系统、市场管理、客服、系统培训等全方位服务。通过生命水的推广与普及帮助广大消费及代理群体远离亚健康、恢复强健体魄！</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/31.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/31" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-06/20160622170059_19863.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-06/20160622170059_19863.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>翘胡子艺术投票展览馆</h4>
                        <span></span>
                        <p>跨界大师－鬼才达利超现实主义大展”系列活动─2015“Qiào胡子” 达利创作大奖是中国首次取得西班牙卡拉•达利基金会官方授权的国际性大奖。此系统保护艺术品的投票 、评审 、颁奖 和 展览。</p>
                    </div>
                </a>
            </li>
                        <!-- <div class="case_more">
                <a href="/FrontCase/case_list/case_type/2" class="case_more_link">>&nbsp;查看更多</a>
            </div> -->
        </ul>
                <ul class="case_deputy mid_hide" id="mid_3">
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/80.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/80" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-07/20170703220947_17654.png" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-07/20170703220947_17654.png" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>美妙郎君牵手互助-互助平台</h4>
                        <span></span>
                        <p>杭州美妙郎君健康管理有限公司，专注乳腺癌互助与乳腺疾病防护，致力于女性乳房美丽健康，在患病互助的基础上，开展乳腺健康疾病管理。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/72.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/72" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-04/20170427204143_16597.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-04/20170427204143_16597.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>爸爸时间-青少年心理咨询教育平台</h4>
                        <span></span>
                        <p>爸爸时间咨询是一款集自我测评、自助学习、咨询服务为一体的综合型手机应用平台，可以方便快捷地帮助家长和孩子认识和解决亲自关系问题、心理健康问题，学习引导问题、生活成长问题，又被称为身边的育儿专家。平台作为下一代教育基金会全国青少年心理健康关爱行动的公用平台，入驻上千名地学校心理专兼职教师，为千家万户分忧解难。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/66.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/66" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-10/20161012205851_89409.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-10/20161012205851_89409.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>够鱼dota2-游戏竞猜菠菜网</h4>
                        <span></span>
                        <p>够鱼提供电竞游戏的饰品兑换，比赛竞猜，一元夺宝，周边服务等项目。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/42.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/42" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-08/20160823102310_28248.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-08/20160823102310_28248.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>化工邦-医药化工人脉社交移动版</h4>
                        <span></span>
                        <p>化工邦，专注于医药化工互联网实名人脉社交和资源对接。致力于通过技术、项目开发、生产、投融资等化工人的人脉社交，打破传统生产制造和研发的束缚，让医药化工研发创新、生产制造、市场推广变得更加简单；
通过互联网+让相关从业人员可以在化工邦的平台上享受自由而且专注的交流资源共享，打造一个属于自己的医药化工城邦和国度</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/82.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/82" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-07/20170705204011_20899.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-07/20170705204011_20899.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>展会-微信会展系统</h4>
                        <span></span>
                        <p>该项目用于中国食品工业协会坚果炒货专业委员会第十一届中国坚果炒货食品展览会报名。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/37.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/37" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-08/20160802132709_78393.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-08/20160802132709_78393.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>岁丰-电梯自媒体运营专家微官网</h4>
                        <span></span>
                        <p>专业提供轿厢内媒体信息发布和运营管理服务。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/23.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/23" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-06/20160614201553_67435.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-06/20160614201553_67435.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>五金机电微商城</h4>
                        <span></span>
                        <p>五金机电微生活</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/40.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/40" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-08/20160823100957_60552.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-08/20160823100957_60552.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>翻牌助力活动-吴晓波频道</h4>
                        <span></span>
                        <p>微信活动：分享活动给好友，让好友助力翻一张牌，当9张牌全部翻开即可获得吴晓波的励志语音。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/4.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/4" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-06/20160608182659_15072.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-06/20160608182659_15072.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>秀出您的职业瞬间投票</h4>
                        <span></span>
                        <p>分享自己的职业瞬间，邀请好友点赞登上排行榜
鲜薯俱乐部是鲜薯科技旗下为大家打造一个汇集职业社交属性，资源整合、推广平台三维一体的职业人用户交流团队。
您也可以通过各种社交软件转发您自己的“职业瞬间”图文并邀请身边朋友为您打赏。在获取打赏收益的同时，您也可以快速提升您分享的图文内容的热度，让更多的人了解您和您的工作。
请使用微信打开下方链接。</p>
                    </div>
                </a>
            </li>
                        <!-- <div class="case_more">
                <a href="/FrontCase/case_list/case_type/3" class="case_more_link">>&nbsp;查看更多</a>
            </div> -->
        </ul>
                <ul class="case_deputy mid_hide" id="mid_4">
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/84.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/84" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-07/20170705205933_40768.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-07/20170705205933_40768.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>艺术互动-艺术展览网站</h4>
                        <span></span>
                        <p>一家专业的艺术管理与运营机构，致力于发掘最具潜力的当代艺术家，

并通过专业化的资源整合与运作，帮助旗下艺术家及其作品更有效的释放价值，更快速地获得与其价值相匹配的市场地位。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/24.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/24" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-06/20160614201840_54953.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-06/20160614201840_54953.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>中珠珠宝城品牌网站</h4>
                        <span></span>
                        <p>中珠珠宝城品牌网站</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/83.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/83" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2017-07/20170705204542_54050.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2017-07/20170705204542_54050.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>金茂五金市场官网</h4>
                        <span></span>
                        <p>杭州金茂五金市场官网</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/36.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/36" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-08/20160802132315_46182.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-08/20160802132315_46182.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>岁丰-电梯信息化官网</h4>
                        <span></span>
                        <p>专业提供轿厢内媒体信息发布和运营管理服务。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/51.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/51" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-08/20160829170127_57557.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-08/20160829170127_57557.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>浙江大立科技股份有限公司品牌官网</h4>
                        <span></span>
                        <p>浙江大立科技股份有限公司是于1984年成立的浙江省测试技术研究所改制而成的股份制高新技术企业，公司专业从事非制冷焦平面探测器等，经过多年稳健的发展，从研究所成长为具有较强自主研发和技术创新能力且经营业绩稳定增长的上市公司。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/20.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/20" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-06/20160614200759_93024.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-06/20160614200759_93024.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>恒发膜结构官方网站</h4>
                        <span></span>
                        <p>恒发膜结构官方网站</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/43.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/43" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-08/20160823102723_46700.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-08/20160823102723_46700.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>文华农牧品牌官网</h4>
                        <span></span>
                        <p>浙江文华农牧有限公司从事家禽养殖行业，专业从事土鸡鸭等家禽的养殖，在保证本品种肉质细嫩，肉味鲜美的同时，使土鸡具有容易饲养、生长较快、羽毛丰满、整齐度高，饲料报酬高等的特点，至脱温能达98%以上，在当地已有很好的青睐，所养殖的鸡鸭销往湖北、广东、四川等多个省市。

孵化厂以“品质保证、服务专业、顾客满意”为经营宗旨，以“求仁为大、求利为小”为经营理念，开拓进取，务实创新，将最好的产品与服务带给最需要的消费者！</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/30.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/30" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-06/20160622165533_84231.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-06/20160622165533_84231.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>伍道国际品牌网站</h4>
                        <span></span>
                        <p>伍道国际是一家一贯以高品质服务为价值导向的综合型咨询设计机构，面对中国城市化的新一轮发展，致力于为每一个设计项目定制独特而富有远见的解决方案。从用地分析、城市规划、建筑设计、景观设计到生态技术咨询，伍道的设计研究涵盖了城市环境的方方面面。</p>
                    </div>
                </a>
            </li>
                        <li class="deputy_li">
                <a href="../FrontCase/case_detail/case_id/53.htm" tppabs="https://beyondin.com/FrontCase/case_detail/case_id/53" class="deputy_a clearfix">
                    <img src="../Uploads/image/article/thumb/2016-08/20160829172346_22274.jpg" tppabs="https://beyondin.com/Uploads/image/article/thumb/2016-08/20160829172346_22274.jpg" onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>行大世界-山雪国际俱乐部</h4>
                        <span></span>
                        <p>山雪国际俱乐部是嘉信山雪（北京）旅游管理有限公司创办的，嘉信山雪（北京）旅游管理有限公司是美国SNOWYHUT在北京成立的办事处，致力于开发中美之间高端旅游度假及亲子户外教育培训。山雪国际俱乐部致力于为旅行的每一个环节打造多面体验选项，专注汇集业界最优质的体验资源，做面向城市中高阶层提供私人定制旅行服务的生活顾问。“行大世界”是进行创造的信念起点，“深刻生活”是专注服务走向的精神归属。</p>
                    </div>
                </a>
            </li>
                        <!-- <div class="case_more">
                <a href="/FrontCase/case_list/case_type/4" class="case_more_link">>&nbsp;查看更多</a>
            </div> -->
        </ul>
        <div class="clear">&nbsp;</div>
       
    </div>
    <!-- 优势板块 -->
    <div class="about_cont3">
        <div class="con_rank_title">
            <p>如果觉得模板还不够，我们还可以提供定制开发服务</p>
            <h4>定制：半定制或全定制，灵活选择性价比最高的方式</h4>
        </div>
        <!-- <h1>我们的优势 模板</h1> -->
        <p class="pc_none">半定制：商城模板基础上修改或新增功能点<br/>全定制：根据业务模式定制开发，打造专属系统</p>
        <p class="yd_none">半定制：商城模板基础上修改或新增功能点<br/>全定制：根据业务模式定制开发，打造专属系统</p>
        <div class="cont3_main clearfix">
            <div class="fl img_box special-img" >
                <img src="../public/Images/front/advantage.jpg" tppabs="https://beyondin.com/public/Images/front/about_pic1.jpg" class="fl mr mb" data-row="0">
               </div>
        </div>
    </div>
     <style>
    /*全屏查看器样式*/
    .fullscreen{
        position: fixed;
        width: 100%;
        height: 100%;
        top: 0;
        left: 0;
        z-index: 100000;
        background-color: #000;
        display: none;
    }
    .fullscreen .fullscreen_slide{
        background-color: #000;
    }
    .fullscreen_slide img{
        display:block;
        max-width:100%;
        max-height:80%;
        position:absolute;
        top:0;
        left:0;
        right:0;
        bottom:0;
        margin:auto;
    }
    </style>
    <!-- 全屏图片查看器-->
    <div class="swiper-container fullscreen" id="fullscreen">
        <div class="swiper-wrapper" id="swiper_wrapper">
        </div>
    </div>
   
      <!-- *********************************** 
    联系
  *********************************** -->
  <div class="ai-eachcont con-black" id="index_contact" nav_index="6">
    <section class="contact active">
      <div class="box">
        <div class="left_card">
          <div class="tab_switch">
            <span class="tab_btn active">成都公司</span>
            <span class="tab_btn" id='wz'>重庆公司</span>
          </div>
          <div class="tab_wrapper">
            <div class="tab_content show">
              <h2 class="company_title">重庆公司</h2>
              <div class="company_item">
                <p>地址ADDRESS</p>
                <h2>重庆 · 未来科技城向往街1008号乐富海邦园P幢9楼</h2>
              </div>
              <div class="company_item">
                <p>联系电话TEL</p>
                <h2><a href="tel:4008752014">400-875-2014</a></h2>
              </div>
              <div class="company_item">
                <p>邮箱E-MAIL</p>
                <h2>customer@beyondin.com</h2>
              </div>
              <div class="work_time">
                <div class="line"></div>
                <p class="work_text">我们的工作从周一至周六（9：00am-21:00pm） </p>
                <p class="work_text">欢迎咨询我们 </p>
              </div>
            </div>
            <div class="tab_content">
              <h2 class="company_title">成都公司</h2>
              <div class="company_item">
                <p>地址ADDRESS</p>
                <h2>成都 · 鹿城区瓯江路鹿港大厦A座6楼</h2>
              </div>
              <div class="company_item">
                <p>联系电话TEL</p>
                <h2>186-6806-3037  </h2>
              </div>
              <div class="company_item">
                <p>邮箱E-MAIL</p>
                <h2>wsq@beyondin.com</h2>
              </div>
              <div class="work_time">
                <div class="line"></div>
                <p class="work_text">我们的工作从周一至周六（9：00am-21:00pm） </p>
                <p class="work_text">欢迎咨询我们 </p>
              </div>
              
            </div>
          </div>
        </div>
        <div class="lacation">
          <i class="icon_location"></i>
        </div>
      </div>

    </section>
    <div class="copy_right">
      <p class="c_name">盈软科技</p>
      <p><span>浙ICP备15014263</span><i class="icon_police"></i><span>浙公网安备  33011002010968号</span></p>
    </div>

    <section class="contact_mobile">
      <div class="tab clearfix">
        <div class="tab_item active">
          <span>
            重庆总部
          </span>
        </div>
        <div class="tab_item">
          <span>
            成都公司
          </span>
        </div>
      </div>
      <div class="tab_container">
        <div class="tab_content show">
          <div class="map">
            <i class="hz icon_location"></i>
            <img src="../public/Images/front/bg_hangzhou_mobile.png" tppabs="https://beyondin.com/public/Images/front/bg_hangzhou_mobile.png" alt="">
          </div>
          <div class="company_item">
            <p>地址ADDRESS</p>
            <h2>杭州 · 未来科技城向往街1008号乐富海邦园P幢9楼</h2>
          </div>
          <div class="company_item">
            <p>联系电话TEL</p>
            <h2><a href="tel:4008752014">400-875-2014</a></h2>
          </div>
          <div class="company_item">
            <p>QQ咨询（长按复制）</p>
            <h2>396162022</h2>
          </div>
          <div class="company_item">
            <p>微信咨询（长按复制）</p>
            <h2>15757157683</h2>
          </div>
          <div class="company_item">
            <p>邮箱E-MAIL</p>
            <h2>customer@beyondin.com</h2>
          </div>
          <div class="work_time">
            <div class="line"></div>
            <p class="work_text">我们的工作时间：每周一至周六（09:00am-21:00pm） </p>
            <p class="work_text">欢迎咨询我们 </p>
          </div>
        </div>
        <div class="tab_content">
          <div class="map">
            <i class="wz icon_location"></i>
            <img src="../public/Images/front/bg_wenzhou_mobile.png" tppabs="https://beyondin.com/public/Images/front/bg_wenzhou_mobile.png" alt="">
          </div>
          <div class="company_item">
            <p>地址ADDRESS</p>
            <h2>温州 · 鹿城区瓯江路鹿港大厦A座6楼</h2>
          </div>
          <div class="company_item">
            <p>联系电话TEL</p>
            <h2><a href="tel:18668063037">186-6806-3037</a></h2>
          </div>
          <div class="company_item">
            <p>邮箱E-MAIL</p>
            <h2>wsq@beyondin.com </h2>
          </div>
          <div class="work_time">
            <div class="line"></div>
            <p class="work_text">我们的工作从周一至周六（9：00am-21:00pm） </p>
            <p class="work_text">欢迎咨询我们 </p>
          </div>
        </div>
      </div>
    </section>
    <div class="copy_right_mobile">
      <p class="c_name">盈软科技</p>
      <p>浙ICP备15014263</p>  
      <p><i class="icon_police"></i><span>浙公网安备  33011002010968号</span></p>
    </div>
  </div>

  <script>
    // 联系页面切换
      $('.tab_switch .tab_btn').on('click',function(){
          var $index = $(this).index();
          // console.log($index); 
          $(this).addClass('active').siblings().removeClass('active');
          $('.tab_wrapper').find('.tab_content').eq($index).addClass('show').siblings().removeClass('show');
          $('.contact').toggleClass('map_active');
          $('.lacation').toggleClass('wz');
      })

        var is_wenzhou = 0;
        if (is_wenzhou == 1) {
          var $index = $(this).index();
          // console.log($index); 
          $('#wz').addClass('active').siblings().removeClass('active');
          $('.tab_wrapper').find('.tab_content').eq($index).addClass('show').siblings().removeClass('show');
          $('.contact').toggleClass('map_active');
          $('.lacation').toggleClass('wz');
        }

      $('.tab .tab_item').on('click',function(){
          var $index = $(this).index();
          // console.log($index); 
          $(this).addClass('active').siblings().removeClass('active');
          $('.tab_container').find('.tab_content').eq($index).addClass('show').siblings().removeClass('show');
      })
  </script>


    
      <!--右边飞行元素-->
<ul class="right-side-flyelem show">
  <a href="javascript:scroll(0,0);"><li class="rsf-items side-icon si-top"></li></a>
  <li class="right_wc_pic">
    <img src="../public/Images/front/icon_wechart.png" tppabs="https://beyondin.com/public/Images/front/icon_wechart.png" class="wc_pic_center">
    <div class="Wc_qr_pic">
      <img src="../public/Images/front/wc_add_pic1.jpg" tppabs="https://beyondin.com/public/Images/front/wc_add_pic1.jpg">
    </div>
  </li>
  <a href="javascript:if(confirm('http://wpa.b.qq.com/cgi/wpa.php?ln=1&key=XzkzODAwNTgxMF8xNzcwNDVfNDAwMDIxODY1NV8yXw  \n\n���ļ��޷��� Teleport Ultra ����, ��Ϊ ����һ�����·���ⲿ������Ϊ������ʼ��ַ�ĵ�ַ��  \n\n�����ڷ������ϴ���?'))window.location='http://wpa.b.qq.com/cgi/wpa.php?ln=1&key=XzkzODAwNTgxMF8xNzcwNDVfNDAwMDIxODY1NV8yXw'" tppabs="http://wpa.b.qq.com/cgi/wpa.php?ln=1&key=XzkzODAwNTgxMF8xNzcwNDVfNDAwMDIxODY1NV8yXw" target="_blank">
    <a href="tencent://message/?uin=1283071085&amp;Site=盈软科技&amp;Menu=yes" onclick="contact(1)" target="_blank">
    <li class="rsf-items side-icon si-qq"></li>
  </a>
  <li class="rsf-items side-icon si-phone"></li>
</ul>
<!--左边在线咨询飞行元素-->
<!-- <div class="left-side-flyelem" id="left-side-flyelem">
  <div class="minsbar"><a href="javascript:leftside_hide();"><span class="msbtn">-</span></a>在线咨询</div>
  <ul class="qq_chart_wrap">
    <div class="qq_title">售前：</div>

        <li>
      <a target=_blank href="http://wpa.qq.com/msgrd?V=1&uin=870187080&Site=在线咨询&Menu=no&title=在线客服"><img border="0" src="http://wpa.qq.com/pa?p=1:870187080:6" align="absmiddle" /> 小琳</a>
    </li>
        <li>
      <a target=_blank href="http://wpa.qq.com/msgrd?V=1&uin=396162022&Site=在线咨询&Menu=no&title=在线客服"><img border="0" src="http://wpa.qq.com/pa?p=1:396162022:6" align="absmiddle" /> 小云</a>
    </li>
      </ul>
  <ul class="qq_chart_wrap">
    <div class="qq_title">售后：</div>

        <li>
      <a target=_blank href="http://wpa.qq.com/msgrd?V=1&uin=1051983692&Site=在线咨询&Menu=no&title=在线客服"><img border="0" src="http://wpa.qq.com/pa?p=1:1051983692:6" align="absmiddle" /> 小黄</a>
    </li>
        <li>
      <a target=_blank href="http://wpa.qq.com/msgrd?V=1&uin=396162022&Site=在线咨询&Menu=no&title=在线客服"><img border="0" src="http://wpa.qq.com/pa?p=1:396162022:6" align="absmiddle" /> 小清</a>
    </li>
      </ul>
  <ul class="call_list_wrap">
    <li class="cl_txt">全国统一</li>
    <li class="cl_txt">咨询服务电话</li>
    <li class="cl_tel">400-875-2014</li>
  </ul>
</div> -->
<!-- <a href="javascript:leftside_show();" id="leftside_min"><div class="left-side-flyelem-min showed"></div></a> -->
<!--关注微信-->
<div class="wx-2-dimensional-bar-code">
  <div class="wx-pop-title">
    <span>微信扫一扫</span>
  </div>
  <div class="show-wx2dc"></div>
  
  <div class="wx2dc_tip">
    <em>或者在 <span>添加朋友</span> - <span>查找公众号</span> 搜索 <span>杭州盈软科技</span></em>
  </div>
  <div class="wx-cls-btn"></div>
</div>
    
  </div>

    <!--
  <script src="http://libs.baidu.com/jquery/2.1.1/jquery.min.js"></script>
    -->

  <script type="text/javascript" src="../public/Js/front/index.js-version=2017120601" tppabs="https://beyondin.com/public/Js/front/index.js?version=2017120601"></script>
  <script src="../public/Js/front/swiper.3.1.2.jquery.min.js" tppabs="https://beyondin.com/public/Js/front/swiper.3.1.2.jquery.min.js"></script>
  
<script>
//获取后台数据
ip = "https://beyondin.com/Index/125.84.82.85";
az_id = 1;
user_id = 665835;
</script>
<script src="../stat.js" tppabs="https://beyondin.com/stat.js"></script>
</body>
</html>
    <!--[if lt IE 9]>
       <script type="text/javascript" src="../public/Js/front/ie.js" tppabs="https://beyondin.com/public/Js/front/ie.js" ></script>
    <![endif]-->
    <script type="text/javascript" src="../public/Js/front/jquery.scrollfire.min.js-version=2017120601" tppabs="https://beyondin.com/public/Js/front/jquery.scrollfire.min.js?version=2017120601"></script>
    <script type="text/javascript" src="../public/Js/front/jay.plugin.smoothscroll.js-version=2017120601-version=2017120601" tppabs="https://beyondin.com/public/Js/front/jay.plugin.smoothscroll.js?version=2017120601?version=2017120601"></script>
    <script type="text/javascript" src="../public/Js/front/sly.min.js-version=2017120601" tppabs="https://beyondin.com/public/Js/front/sly.min.js?version=2017120601"></script>
    <script type="text/javascript" src="../public/Js/front/jay.js-version=2017120601" tppabs="https://beyondin.com/public/Js/front/jay.js?version=2017120601"></script>
    <script>
    var contact_tel = '400-875-2014';
    var case_type = parseInt('');
    
    //案例分类默认展开
    var clientWidth = $(window).width();
     $(function(){
        if(case_type){
            if(clientWidth>460)
            {
                    $("#main_"+case_type).show().siblings().hide();
                    $(".c_nav").show();
                    $(".con_rank_title").show();
                    $("#li_"+case_type).addClass("li_a").siblings().removeClass("li_a");
            }
            else
            {
                    $("#mid_"+case_type).show().siblings().hide();
                    $(".c_nav").show();
                    $(".con_rank_title").show();
                    $("#li_"+case_type).addClass("li_a").siblings().removeClass("li_a");
            }
        }   
    });
    
    function no_news_pic(obj)
    {
        obj.setAttribute('src','../public/Images/front/defaultpic.jpg'/*tpa=https://beyondin.com/public/Images/front/defaultpic.jpg*/);
    }
    function no_pic(obj)
    {
        obj.setAttribute('src','../public/Images/front/defaultpic1.jpg'/*tpa=https://beyondin.com/public/Images/front/defaultpic1.jpg*/);
    }
    //导航条的滚动切换
    $(function(){
        if ($(window).scrollTop()>10)
        {
            $("#ai-header").addClass('cur'); 
        }
    });
    var myVideo = document.getElementById('video');
    $(window).scroll(function(){  
        if ($(window).scrollTop()>10)
        {
            $("#ai-header").addClass('cur');  
        }  
        else  
        {  
            $("#ai-header").removeClass('cur');  
        }
        if(clientWidth > 1100)
        {
            if ($(window).scrollTop()>500)
            {
                myVideo.play();
            }
        }
    });
    //新闻资讯切换
    function nwxshi(a) 
    {

        $(".nwnr").hide();

        $("#nw_" + a).show();

        $(".nwxg").removeClass("cur");
        $("#nwa_" + a).addClass("cur");

    }
/*案例鼠标经过效果*/
    $(".img_nav").hover(function()
        {
            $(".case_bg",this).stop().animate(
                {top:"0"})
        },function()
        {
            $(".case_bg",this).stop().animate(
                {top:"244px"})
        });
/*点击案例下导航切换九宫格*/
    
    if(clientWidth>460)
    {
        $(".nav_btn").on("click",function()
        {
            var Obj = $(this).attr("id");
            var num = Obj.substring(2, Obj.length);
            $("#main"+num).show().siblings().hide();
            $(".c_nav").show();
            $(".con_rank_title").show();
            $(this).addClass("li_a").siblings().removeClass("li_a");
        });
    }
    else
    {
        $(".nav_btn").on("click",function()
        {
            var Obj = $(this).attr("id");
            var num = Obj.substring(2, Obj.length);
            $("#mid"+num).show().siblings().hide();
            $(".c_nav").show();
            $(".con_rank_title").show();
            $(this).addClass("li_a").siblings().removeClass("li_a");
        });
    }
    if(clientWidth < 800)
    {
        $('#contact_link').attr('href', 'tel:' + contact_tel);
    }
    
    if(clientWidth < 460){
        $('.img_box img').on('click', function(event){
            event.preventDefault();
  
            var row = $(this).data('row');
            var img_urls = [];
            $(this).parent().find('img').each(function() {        
              img_urls.push($(this).attr("src"));
            });
            var html = '';
            for(i=0;i<img_urls.length;i++){
              html += '<div class="swiper-slide fullscreen_slide"><img src="'+img_urls[i]+'"/></div>';
            }
            $('#swiper_wrapper').empty().append(html);
            $('#fullscreen').fadeIn();
            var full_swiper = new Swiper('.fullscreen',{
              //pagination : '.full_pagination',
            });
            full_swiper.slideTo(row, 0, false);
            if(row==0){
                $("#swiper_wrapper").css({
                "transform": "translate3d(0px, 0px, 0px)"
            });
          }
        });
        // 关闭查看器
        $('#fullscreen').on('click', function(event) {
            event.preventDefault();
            $(this).fadeOut();
        });
    }
</script>


  <span style="display:none;"><img src="../../z4.cnzz.com/stat.htm-id=1259622373&r=https---beyondin.com-&iw=1&showp=0x0&lg=undefined&cnzz_eid=none&p=https---beyondin.com-Index-index&rnd=895566138" tppabs="https://c.cnzz.com/wapstat.php?siteid=1259622373&r=https%3A%2F%2Fbeyondin.com%2F&rnd=1017592464" style="width:0px; height:0px"/></span>
  
      <script>

/*var _hmt = _hmt || [];
(function() {
  var hm = document.createElement("script");
  hm.src = "../../hm.baidu.com/hm.js-4b7ad1961d527ea4ed759d08f935e318"/*tpa=https://hm.baidu.com/hm.js?4b7ad1961d527ea4ed759d08f935e318;
  var s = document.getElementsByTagName("script")[0]; 
  s.parentNode.insertBefore(hm, s);
})();*/
(function(b,a,e,h,f,c,g,s){b[h]=b[h]||function(){(b[h].c=b[h].c||[]).push(arguments)};
b[h].s=!!c;g=a.getElementsByTagName(e)[0];s=a.createElement(e);
s.src="//s.union.360.cn/"+f+".js";s.defer=!0;s.async=!0;g.parentNode.insertBefore(s,g)
})(window,document,"script","_qha",219370,false);
    </script> 
    
</body>
</html>