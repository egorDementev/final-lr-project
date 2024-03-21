Action()
{
	
	int length, i;
	char name[20];
	char catId[512];
	char userIdValue[100];
	char* randomCategoryId;
	char paramName[100];
	int randomIndex;
	char alphabet[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	lr_start_transaction("Register_Transaction");

	

		lr_start_transaction("open_web_site");
		
			memset(name, '\0', sizeof name);
		
			length = rand() % 8 + 5;
			for (i=0; i <= length; i += 1)
				strncat(name,alphabet+(rand() % 52),1);
			
			lr_save_string(name,"userdata");
			
			lr_output_message("Userdata %s", "userdata");
			
			
	
			web_set_sockets_option("SSL_VERSION", "AUTO");
		
			web_set_user("{userdata}", lr_unmask("65f2dad58a19491b038a95ae3dd7"), "www.advantageonlineshopping.com:443");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710412573.4.1.1710414337.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.2.1042891913.1710324251; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_gid=GA1.2.547533233.1710324287; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414249.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710412573.4.1.1710414362.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.1.1042891913.1710324251; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Sec-Fetch-Dest", "document");
		
			web_add_header("Sec-Fetch-Mode", "navigate");
		
			web_add_header("Sec-Fetch-Site", "none");
		
			web_add_header("Sec-Fetch-User", "?1");
		
			web_add_header("Upgrade-Insecure-Requests", "1");
		
			
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
				"Url=/services.properties", ENDITEM, 
				"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
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
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414413.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
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
			
			web_reg_save_param_regexp(
			    "ParamName=categoryId",
			    "RegExp=\"categoryId\":(\\d+)",
			    "Ordinal=All",
			    LAST);
		
			
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
			
			randomIndex = rand() % atoi(lr_eval_string("{categoryId_count}")) + 1;

			sprintf(paramName, "{categoryId_%d}", randomIndex);
			
			randomCategoryId = lr_eval_string(paramName);

			lr_output_message("Random categoryId selected: %s", randomCategoryId);
		
			
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
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414440.33.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			
			web_reg_find("Text=SPACIAL OFFER", LAST);
			web_url("home-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t7.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				LAST);
	
		lr_end_transaction("open_web_site",LR_AUTO);
	

		lr_think_time(5);
		
	
		lr_start_transaction("create_new_account");
	
			web_add_auto_header("Sec-Fetch-Dest", "empty");
		
			web_add_auto_header("Sec-Fetch-Mode", "cors");
		
			web_add_auto_header("Sec-Fetch-Site", "same-origin");
		
			
			web_reg_find("Text=CREATE_ACCOUNT", LAST);
			web_url("register-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/user/views/register-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t9.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414457.16.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetCountriesRequest");
		
			web_add_auto_header("Origin", "https://www.advantageonlineshopping.com");
		
			web_add_auto_header("X-Requested-With", "XMLHttpRequest");
		
			
			web_reg_find("Text=Bahamas", LAST);
			web_custom_request("GetCountriesRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t10.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>",
				LAST);
	
		lr_end_transaction("create_new_account",LR_AUTO);
		
		
		lr_think_time(5);
		
	
		lr_start_transaction("register");
	
			web_add_auto_header("SOAPAction", "com.advantage.online.store.accountserviceAccountCreateRequest");
		

			web_reg_find("Text=<ns2:success>true</ns2:success>", LAST);
			web_custom_request("AccountCreateRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t11.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address></address>" 
				"<allowOffersPromotion>true</allowOffersPromotion><cityName></cityName><countryId>United States,us</countryId><email>{email}</email>"
				"<firstName></firstName><lastName></lastName><loginName>{userdata}</loginName><password>{password}</password><phoneNumber></phoneNumber>" 
				"<stateProvince></stateProvince><zipcode></zipcode></AccountCreateRequest></soap:Body></soap:Envelope>",
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414512.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_revert_auto_header("SOAPAction");
		
			web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAccountLoginRequest");
		
		lr_end_transaction("register",LR_AUTO);
		
		
		lr_think_time(5);
		
	
		lr_start_transaction("login");
		
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
				"Snapshot=t13.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>{email}</email><loginPassword>{password}</loginPassword>" 
				"\<loginUser>{userdata}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>",
				LAST);
		
			web_set_sockets_option("INITIAL_AUTH", "BASIC");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414515.57.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_revert_auto_header("Origin");
		
			web_revert_auto_header("X-Requested-With");
			
			lr_save_string(lr_eval_string("{userId}"), "userIdValue");
			
			web_add_header("Authorization", "Basic {authorization}");
		
			
			web_reg_find("Text=\"userId\":{userIdValue}", LAST);
			web_url("{userIdValue}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userIdValue}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t14.inf", 
				"Mode=HTML", 
				LAST);
	
		lr_end_transaction("login",LR_AUTO);
		
		
		lr_think_time(5);
		
		
		lr_start_transaction("choose_category");
		
			memset(catId, '\0', sizeof catId);
		
			lr_save_string(lr_eval_string(randomCategoryId), "catId");
				
			web_reg_save_param_regexp(
			    "ParamName=productId",
			    "RegExp=\"productId\":(\\d+)",
			    "Ordinal=All",
			    LAST);
			
			web_reg_find("Text=productId", LAST);
			web_url("products", 
			    "URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{catId}/products", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t22.inf", 
				"Mode=HTML", 
				LAST);
		
			
			web_reg_find("Text=\"categoryId\":{catId}", LAST);
			web_url("attributes", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t23.inf", 
				"Mode=HTML", 
				LAST);
		
			
			web_reg_find("Text=BUY_NOW", LAST);
			web_url("category-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t24.inf", 
				"Mode=HTML", 
				LAST);
	
		lr_end_transaction("choose_category",LR_AUTO);
		
	
		
	lr_end_transaction("Register_Transaction", LR_AUTO);


	return 0;
}