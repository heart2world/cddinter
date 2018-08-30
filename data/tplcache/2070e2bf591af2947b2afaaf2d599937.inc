[field:array runphp=yes /]
          if(@me['platform']=='微信公众号'){
            <li class="img_nav">
                <a href="[field:arcurl /]" class="nav_a clearfix">
                    <img src="[field:litpic /]"  onerror="no_pic(this);" />                   
                    <div class="case_bg">
                        <div class="case-box">
                           <!--  <h4>名称：[field:title /]</h4>
                            <h4>类型：[field:catname /]</h4> -->
                            <h4>功能：[field:gongneng /]</h4>
                        </div>
                    </div>
                </a>
            </li>
            }
            [/field:array]