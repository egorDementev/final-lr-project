Action()
{
	char* randomCategoryId;
	char* randomProductId;
	char* randomColor;
	char userIdValue[100];
	char sessionIdValue[100];
	char paramName[100];
	int randomIndex;
	char catId[512];
	char prodId[512];
	char colorCode[100];
	
	lr_start_transaction("Buy_Item_Transaction");
	
		lr_start_transaction("open_web_site");
	
			web_set_sockets_option("SSL_VERSION", "AUTO");
		
			web_set_user("{userName}", lr_unmask("65f2d9246c8529423e96f26944"), "www.advantageonlineshopping.com:443");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710412573.4.0.1710412573.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.2.1042891913.1710324251; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_gid=GA1.2.547533233.1710324287; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710412659.16.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_auto_header("Sec-Fetch-Dest", "document");
		
			web_add_auto_header("Sec-Fetch-Mode", "navigate");
		
			web_add_auto_header("Sec-Fetch-Site", "none");
		
			web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710412573.4.1.1710413997.0.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga=GA1.1.1042891913.1710324251; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Sec-Fetch-User", "?1");
		
			web_add_header("Upgrade-Insecure-Requests", "1");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414081.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414101.40.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			
			web_reg_find("Text=Product Added Successfully", LAST);
			web_url("www.advantageonlineshopping.com", 
				"URL=https://www.advantageonlineshopping.com/", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=", 
				"Snapshot=t13.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/main.min.js", ENDITEM, 
				"Url=/services.properties", ENDITEM, 
				"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/catalog/fetchImage?image_id=3100", ENDITEM, 
				"Url=/catalog/fetchImage?image_id=3200", ENDITEM, 
				"Url=/css/images/category_banner_3.png", ENDITEM, 
				"Url=/catalog/fetchImage?image_id=3300", ENDITEM, 
				"Url=/catalog/fetchImage?image_id=3202", ENDITEM, 
				"Url=/catalog/fetchImage?image_id=3201", ENDITEM, 
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
				"Snapshot=t14.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414009.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
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
				"Snapshot=t15.inf", 
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
				"Snapshot=t16.inf", 
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
				"Snapshot=t17.inf", 
				"Mode=HTML", 
				LAST);
		
			
			web_reg_find("Text=HP ELITEPAD 1000 G2 TABLET", LAST);
			web_url("popularProducts.json", 
				"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t18.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414035.34.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			
			web_reg_find("Text=SPACIAL OFFER", LAST);
			web_url("home-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t19.inf", 
				"Mode=HTML", 
				EXTRARES, 
				"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
				"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
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
				"ParamName=sessionId",
				"RegExp=<ns2:sessionId>(.*?)</ns2:sessionId>",
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
				"Snapshot=t20.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>{email}</email><loginPassword>{password}</loginPassword>" 
				"<loginUser>{userName}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>",
				LAST);
		
			web_set_sockets_option("INITIAL_AUTH", "BASIC");
			
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414057.12.0.0; DOMAIN=www.advantageonlineshopping.com");
			
			lr_save_string(lr_eval_string("{userId}"), "userIdValue");
			lr_save_string(lr_eval_string("{sessionId}"), "sessionIdValue");
			
			web_add_header("Authorization", "Basic {authorization}");
	
			web_url("{userIdValue}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userIdValue}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t21.inf", 
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
			
			randomIndex = rand() % atoi(lr_eval_string("{productId_count}")) + 1;
			
			memset(paramName, '\0', sizeof paramName);

			sprintf(paramName, "{productId_%d}", randomIndex);
			
			randomProductId = lr_eval_string(paramName);
		
			
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
		
		
		lr_think_time(5);
		
	
		lr_start_transaction("choose_product");
		
			memset(prodId, '\0', sizeof prodId);
		
			lr_save_string(lr_eval_string(randomProductId), "prodId");
			
			web_reg_save_param_regexp(
			    "ParamName=color",
			    "RegExp=\"code\":\\s*\"([^\"]+)\",",
			    "Ordinal=All",
			    LAST);
			
			web_reg_find("Text=\"productId\":{prodId},", LAST);
			web_url("{prodId}", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/{prodId}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t25.inf", 
				"Mode=HTML", 
				LAST);
		
			randomIndex = rand() % atoi(lr_eval_string("{color_count}")) + 1;
			
			memset(paramName, '\0', sizeof paramName);

			sprintf(paramName, "{color_%d}", randomIndex);
			
			randomColor = lr_eval_string(paramName);
			
			web_reg_find("Text=categoryId", LAST);
			web_url("all_data", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t26.inf", 
				"Mode=HTML", 
				LAST);
		
			
			web_reg_find("Text=categoryId\":{catId}", LAST);
			web_url("products_2", 
				"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{catId}/products", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t27.inf", 
				"Mode=HTML", 
				LAST);
		
			
			web_reg_find("Text=ADD_TO_CART", LAST);
			web_url("product-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t28.inf", 
				"Mode=HTML", 
				LAST);
	
		lr_end_transaction("choose_product",LR_AUTO);
		
		
		lr_think_time(5);
		
		
		lr_start_transaction("add_to_card");

			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710424280.5.1.1710424379.39.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("Origin", "https://www.advantageonlineshopping.com");
			
			memset(colorCode, '\0', sizeof colorCode);
		
			lr_save_string(lr_eval_string(randomColor), "colorCode");
			
			web_add_header("Authorization", "Basic {authorization}");
		
			web_reg_find("Text=exists\":true", LAST);
			web_submit_data("{colorCode}", 
				"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/{userIdValue}/product/{prodId}/color/{colorCode}?quantity=1", 
				"Method=POST", 
				"EncType=",
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t17.inf", 
				"Mode=HTML", 
				ITEMDATA, 
				"Name=sessionId", "Value={sessionIdValue}", ENDITEM, 
				LAST);
	
		lr_end_transaction("add_to_card",LR_AUTO);
		
		
		lr_think_time(5);
		

		lr_start_transaction("go_to_basket");
		
			web_add_header("Authorization", "Basic {authorization}");
	
			
			web_reg_find("Text=\"userId\":{userIdValue}", LAST);
			web_url("{userIdValue}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userIdValue}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t18.inf", 
				"Mode=HTML", 
				LAST);
		
			
			web_reg_find("text=PAYMENT_OPTIONS", LAST);
			web_url("shoppingCart.html", 
				"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t19.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710424280.5.1.1710424420.60.0.0; DOMAIN=www.advantageonlineshopping.com");
		
			web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetAccountByIdRequest");
		
			web_add_auto_header("Origin", "https://www.advantageonlineshopping.com");
		
			web_add_auto_header("X-Requested-With", "XMLHttpRequest");
			
			web_add_header("Authorization", "Basic {authorization}");
		
			
			web_reg_find("Text=loginName>{userName}<", LAST);
			web_custom_request("GetAccountByIdRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t20.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userIdValue}</accountId>" 
				"<base64Token>Basic {authorization}</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>",
				LAST);
		
			web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetAccountByIdNewRequest");
		
			
			web_reg_find("Text=loginName>{userName}", LAST);
			web_custom_request("GetAccountByIdNewRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t21.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userIdValue}</accountId>" 
				"<base64Token>Basic {authorization}</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>",
				LAST);
		
			web_revert_auto_header("Origin");
		
			web_revert_auto_header("X-Requested-With");
			
			web_add_header("Authorization", "Basic {authorization}");
			
			web_reg_find("Text=\"userId\":{userIdValue}", LAST);
			web_url("{userIdValue}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userIdValue}", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t22.inf", 
				"Mode=HTML", 
				LAST);
		
			web_add_auto_header("Origin", "https://www.advantageonlineshopping.com");
		
			
			web_reg_find("text=\"code\":\"Ok\"", LAST);
			web_custom_request("shippingcost", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/shippingcost/", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t23.inf", 
				"Mode=HTML", 
				"EncType=application/json;charset=utf-8", 
				"Body={\"seaddress\":{\"addressLine1\":\"\",\"addressLine2\":\"\",\"city\":\"\",\"country\":\"us\",\"postalCode\":\"\",\"state\":\"\"}," 
				"\"secustomerName\":\"{userName} \",\"secustomerPhone\":\"\",\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\"," 
				"\"sessionId\":\"{sessionIdValue}\"}",
				LAST);
		
			web_add_header("SOAPAction", "com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");
		
			web_add_header("X-Requested-With", "XMLHttpRequest");
		
			
			web_reg_find("Text=PaymentPreferences", LAST);
			web_custom_request("GetAccountPaymentPreferencesRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t24.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userIdValue}</accountId>" 
				"<base64Token>Basic {authorization}</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>",
				LAST);
		
			web_revert_auto_header("Origin");
		
			
			web_reg_find("Text=ORDER_PAYMENT", LAST);
			web_url("orderPayment-page.html", 
				"URL=https://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/html", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t25.inf", 
				"Mode=HTML", 
				LAST);
			
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
				"Snapshot=t26.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>",
				LAST);
	
	
		lr_end_transaction("go_to_basket",LR_AUTO);
	
		
		lr_think_time(5);

	
		lr_start_transaction("payment");
	
			web_add_header("SOAPAction", "com.advantage.online.store.accountserviceAddSafePayMethodRequest");
		
			
			web_reg_find("Text=SafePay data updated successfully", LAST);
			web_custom_request("AddSafePayMethodRequest", 
				"URL=https://www.advantageonlineshopping.com/accountservice/ws/AddSafePayMethodRequest", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=text/xml", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t27.inf", 
				"Mode=HTML", 
				"EncType=text/xml; charset=UTF-8", 
				"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" " 
				"xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body>" 
				"<AddSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><safePayUsername>{userName}</safePayUsername>" 
				"<accountId>{userIdValue}</accountId><safePayPassword>{password}</safePayPassword><base64Token>Basic {authorization}</base64Token></"
				"AddSafePayMethodRequest></soap:Body></soap:Envelope>", 
				LAST);
		
			web_revert_auto_header("X-Requested-With");
		
			web_add_header("Authorization", "Basic {authorization}");
			
			
			web_reg_find("Text=order completed successfully", LAST);
			web_custom_request("{userIdValue}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/{userIdValue}", 
				"Method=POST", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t28.inf", 
				"Mode=HTML", 
				"EncType=application/json", 
				"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"\"," 
				"\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\"," 
				"\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0," 
				"\"Transaction_SafePay_Password\":\"{password}\",\"Transaction_SafePay_UserName\":\""
				"{userName}\",\"Transaction_TransactionDate\":\"14032024\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":" 
				"{\"Shipping_Address_Address\":\"\",\"Shipping_Address_City\":\"\",\"Shipping_Address_CountryCode\":40," 
				"\"Shipping_Address_CustomerName\":\"{userName} \",\"Shipping_Address_CustomerPhone\":\"\",\"Shipping_Address_PostalCode\":\"\"," 
				"\"Shipping_Address_State\":\"\",\"Shipping_Cost\":1279,\"Shipping_NumberOfProducts\":1,\"Shipping_TrackingNumber\":0}," 
				"\"purchasedProducts\":[{\"hexColor\":\""
				"{colorCode}\",\"productId\":{prodId},\"quantity\":1,\"hasWarranty\":false}]}", 
				LAST);
		
			web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710424280.5.1.1710424521.60.0.0; DOMAIN=www.advantageonlineshopping.com");
			
			web_add_header("Authorization", "Basic {authorization}");
		
			
			web_reg_find("Text=\"userId\":{userIdValue}", LAST);
			web_custom_request("{userIdValue}", 
				"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userIdValue}", 
				"Method=DELETE", 
				"TargetFrame=", 
				"Resource=0", 
				"RecContentType=application/json", 
				"Referer=https://www.advantageonlineshopping.com/", 
				"Snapshot=t29.inf", 
				"Mode=HTML", 
				LAST);
		
		lr_end_transaction("payment",LR_AUTO);
		
	
		
	lr_end_transaction("Buy_Item_Transaction", LR_AUTO);

	return 0;
}