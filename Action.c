Action()
{

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("sec-ch-ua", 
		"\" Not;A Brand\";v=\"99\", \"Google Chrome\";v=\"91\", \"Chromium\";v=\"91\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	web_reg_save_param_ex(
		"ParamName=c_token",
		"LB=<input type=\"hidden\" name=\"_csrf_token\" value=\"",
		"RB=\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		LAST);


	web_url("login", 
		"URL=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_concurrent_start(NULL);

	web_url("reset.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/reset.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("tipTip.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/tipTip.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("jquery-ui-1.8.21.custom.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/jquery/jquery-ui-1.8.21.custom.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("login.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/login.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("main.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/main.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("jquery.autocomplete.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/jquery/jquery.autocomplete.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("orangehrm.autocomplete.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/orangehrm.autocomplete.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("bootstrap-modal.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/jquery/bootstrap-modal.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t9.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.form.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/jquery/jquery.form.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t10.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("fontawesome.min.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/fontawesome-5.13.0/js/fontawesome.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.autocomplete.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/jquery/jquery.autocomplete.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t12.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("archive.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/archive.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t13.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("regular.min.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/fontawesome-5.13.0/js/regular.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t14.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.tipTip.minified.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/jquery/jquery.tipTip.minified.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t15.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("orangehrm.marketplace.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/orangehrm.marketplace.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t16.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.validate.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/jquery/validate/jquery.validate.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t17.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("orangehrm.helper.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/orangehrm.helper.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t18.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("solid.min.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/fontawesome-5.13.0/js/solid.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("orangehrm.validate.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/orangehrm.validate.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery-3.4.1.min.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/jquery/jquery-3.4.1.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.ui.datepicker.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/jquery/jquery.ui.datepicker.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.clickoutside.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/jquery/jquery.clickoutside.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("logo.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/login/logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("linkedin.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/login/linkedin.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("facebook.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/login/facebook.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t26.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("jquery.ui.core.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/js/jquery/jquery.ui.core.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t27.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("twiter.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/login/twiter.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t28.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("youtube.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/login/youtube.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t29.inf", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("favicon.ico", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/favicon.ico", 
		"Resource=1", 
		"RecContentType=image/vnd.microsoft.icon", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t30.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Origin", 
		"https://opensource-demo.orangehrmlive.com");

	lr_think_time(117);

	web_submit_data("validateCredentials", 
		"Action=https://opensource-demo.orangehrmlive.com/index.php/auth/validateCredentials", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/auth/login", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=actionID", "Value=", ENDITEM, 
		"Name=hdnUserTimeZoneOffset", "Value=5.5", ENDITEM, 
		"Name=installation", "Value=", ENDITEM, 
		"Name=_csrf_token", "Value={c_token}", ENDITEM, 
		"Name=txtUsername", "Value=Admin", ENDITEM, 
		"Name=txtPassword", "Value=admin123", ENDITEM, 
		"Name=Submit", "Value=LOGIN", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("buzzCommon.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/js/buzzCommon.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t32.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("viewNotificationComponent.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/css/viewNotificationComponent.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t33.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("viewShareSuccess.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/css/viewShareSuccess.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t34.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("viewBuzzSuccess.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/css/viewBuzzSuccess.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t35.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("messageBoxStyles.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/css/messageBoxStyles.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t36.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("_beaconAbout.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBeaconPlugin/css/_beaconAbout.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t37.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("getSharedEmployeeListSuccess.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/css/getSharedEmployeeListSuccess.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t38.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("photoTiling.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/css/photoTiling.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t39.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("viewPostComponent.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/js/viewPostComponent.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t40.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("mainMenuComponent.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmCorePlugin/js/mainMenuComponent.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t41.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("viewHelpComponent.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmHelpPlugin/css/viewHelpComponent.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t42.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("viewPostComponent.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/css/viewPostComponent.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t43.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("mainMenuComponent.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmCorePlugin/css/mainMenuComponent.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t44.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("viewNotificationComponent.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/js/viewNotificationComponent.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t45.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("orangehrmDashboardPlugin.css", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmDashboardPlugin/css/orangehrmDashboardPlugin.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("buzzNew.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/js/buzzNew.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t47.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("logo.png_2", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t48.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("ApplyLeave.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmLeavePlugin/images/ApplyLeave.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t49.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("MyLeave.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmLeavePlugin/images/MyLeave.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t50.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_concurrent_start(NULL);

	web_url("h1-bg.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/h1-bg.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/main.css", 
		"Snapshot=t51.inf", 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_url("loading.gif", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmDashboardPlugin/images/loading.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t52.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(42);

	web_url("pendingLeaveRequests", 
		"URL=https://opensource-demo.orangehrmlive.com/index.php/dashboard/pendingLeaveRequests", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	lr_think_time(5);

	web_url("close.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/images/close.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t54.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav-bg.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/nav-bg.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/main.css", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("welcome-down.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/welcome-down.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/main.css", 
		"Snapshot=t56.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(4);

	web_url("employeeDistribution", 
		"URL=https://opensource-demo.orangehrmlive.com/index.php/dashboard/employeeDistribution", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("vload.gif", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmBuzzPlugin/images/vload.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t58.inf", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("sub-nav-arrow-n.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/sub-nav-arrow-n.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/main.css", 
		"Snapshot=t59.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_concurrent_start(NULL);

	web_url("jquery.flot.min.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmDashboardPlugin/js/flot/jquery.flot.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t60.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("jquery.flot.pie.min.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmDashboardPlugin/js/flot/jquery.flot.pie.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t61.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("JUMFlot.min.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmDashboardPlugin/js/flot/JUMFlot.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t62.inf", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("pie-chart.js", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmDashboardPlugin/js/graph-visualizer/pie-chart.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t63.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_think_time(41);

	web_url("MyTimesheet.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/orangehrmTimePlugin/images/MyTimesheet.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t64.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("sub-nav.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/sub-nav.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/main.css", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("welcome-up.png", 
		"URL=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/images/welcome-up.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://opensource-demo.orangehrmlive.com/webres_6051af48107ce6.31500353/themes/default/css/main.css", 
		"Snapshot=t66.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("Loggedin=True; DOMAIN=opensource-demo.orangehrmlive.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(21);

	web_url("logout", 
		"URL=https://opensource-demo.orangehrmlive.com/index.php/auth/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://opensource-demo.orangehrmlive.com/index.php/dashboard", 
		"Snapshot=t67.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}