<li class="deputy_li">
                <a href="[field:arcurl /]"  class="deputy_a clearfix">
                    <img src="[field:litpic /]"  onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>[field:title /]</h4>
                        <span></span>
                        <p>[field:gongneng /]</p>
                    </div>
                </a>
            </li>
          
        </ul>
        <ul class="case_deputy mid_hide" id="mid_2">
            
            {dede:arclistsg sort='sort' row='9' channelid='-8' keyword='微信公众号' orderway='desc' keyword1='金融保险' typeid='12'} 
            <li class="deputy_li">
                <a href="[field:arcurl /]"  class="deputy_a clearfix">
                    <img src="[field:litpic /]"  onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>[field:title /]</h4>
                        <span></span>
                        <p>[field:gongneng /]</p>
                    </div>
                </a>
            </li>
                        
        </ul>
        <ul class="case_deputy mid_hide" id="mid_3">
            
            {dede:arclistsg sort='sort' row='9' channelid='-8' keyword='微信公众号' orderway='desc' keyword1='线上教育' typeid='12'} 
            <li class="deputy_li">
                <a href="[field:arcurl /]"  class="deputy_a clearfix">
                    <img src="[field:litpic /]"  onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>[field:title /]</h4>
                        <span></span>
                        <p>[field:gongneng /]</p>
                    </div>
                </a>
            </li>
                      
        </ul>
        <ul class="case_deputy mid_hide" id="mid_4">
            
           {dede:arclistsg sort='sort' row='9' channelid='-8' keyword='微信公众号' orderway='desc' keyword1='其他行业' typeid='12'} 
            <li class="deputy_li">
                <a href="[field:arcurl /]"  class="deputy_a clearfix">
                    <img src="[field:litpic /]"  onerror="no_pic(this);" />
                    <div class="deputy_bg">
                        <h4>[field:title /]</h4>
                        <span></span>
                        <p>[field:gongneng /]</p>
                    </div>
                </a>
            </li>
        </ul>
        <div class="clear"> </div>
       
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
   
    <!-- ***********************************联系*********************************** -->
    {dede:include filename="footer.htm"