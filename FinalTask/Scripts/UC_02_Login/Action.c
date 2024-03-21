Action()
{

	char userIdValue[100];
	
	lr_start_transaction("Login_Transaction");
	
	
	
		lr_start_transaction("open_web_site");
	
			web_set_sockets_option("SSL_VERSION", "AUTO");
		
			web_set_user("{userName}", lr_unmask("65f2d381bcf5f60efabb1cf2a2"), "www.advantageonlineshopping.com:443");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710336240.3.1.1710338138.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.2.1042891913.1710324251; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_gid=GA1.2.547533233.1710324287; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710336245.3.1.1710338272.59.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_auto_header("Sec-Fetch-Dest", "document");
		
			web_add_auto_header("Sec-Fetch-Mode", "navigate");
		
			web_add_auto_header("Sec-Fetch-Site", "none");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710412573.4.0.1710412573.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.1.1042891913.1710324251; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Sec-Fetch-User", "?1");
		
			web_add_header("Upgrade-Insecure-Requests", "1");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710412629.46.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			
			web_reg_find("Text=Product Added Successfully", LAST);
			web_url("www.advantageonlineshopping.com", 
				"URL=https://www.advantageonlineshopping.com/", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=", 
				"Snapshot=t1.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/main.min.js", ENDITEM, 
				"Url=/services.properties", ENDITEM, 
				"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/images/twitter.png", ENDITEM, 
				"Url=/css/images/linkedin.png", ENDITEM, 
				"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
		
			web_add_auto_header("Sec-Fetch-Dest", "empty");
		
			web_add_auto_header("Sec-Fetch-Mode", "cors");
		
			web_add_auto_header("Sec-Fetch-Site", "same-origin");
		
			
			web_reg_find("text=parameters", LAST);
			web_url("ALL", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t2.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Origin", "https://www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetAccountConfigurationRequest");
		
			web_add_header("X-Requested-With", "XMLHttpRequest");
		
			
			web_reg_find("text=allowUserConfiguration>true<", LAST);
			web_custom_request("GetAccountConfigurationRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t3.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>",
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.0.1710412615.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			
			web_reg_find("Text=categoryId", LAST);
			web_url("categories", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t4.inf", 
				"Mode=HTML", 
				LAST);
		
			
			web_reg_find("Text=EXPLORE THE NEW DESIGN", LAST);
			web_url("search", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t5.inf", 
				"Mode=HTML", 
				LAST);
		
			
			web_reg_find("Text=HP ELITEPAD 1000 G2 TABLET", LAST);
			web_url("popularProducts.json", 
				"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t6.inf", 
				"Mode=HTML", 
				LAST);
		
			
			web_reg_find("Text=SPACIAL OFFER", LAST);
			web_url("home-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t7.inf", 
				"Mode=HTML", 
				LAST);
	
		lr_end_transaction("open_web_site",LR_AUTO);
	
	
		lr_think_time(5);
		
	
		lr_start_transaction("login");
	
			web_add_header("Origin", "https://www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLoginRequest");
		
			web_add_header("X-Requested-With", "XMLHttpRequest");
			
			web_reg_save_param_regexp(
				"ParamName=userId",
				"RegExp=<ns2:userId>(\\d+)</ns2:userId>",
				LAST);
		
			web_reg_save_param_regexp(
				"ParamName=authorization",
				"RegExp=<ns2:t_authorization>(.*?)</ns2:t_authorization>",
				LAST);
			
			web_reg_find("Text=Login Successful", LAST);
			web_custom_request("AccountLoginRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t8.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>{password}</loginPassword>" 
				"<loginUser>{userName}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>",
				LAST);
		
			web_set_sockets_option("INITIAL_AUTH", "BASIC");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710412659.16.0.0; DOMAIN=www.advantageonlineshopping.com");
			
			lr_save_string(lr_eval_string("{userId}"), "userIdValue");
			
			web_add_header("Authorization", "Basic {authorization}");
		
			
			web_reg_find("Text=\"userId\":{userIdValue}", LAST);
			web_url("{userIdValue}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userIdValue}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t9.inf", 
				"Mode=HTML", 
				LAST);
	
		lr_end_transaction("login",LR_AUTO);
	
		
	
	lr_end_transaction("Login_Transaction", LR_AUTO);


	return 0;
}