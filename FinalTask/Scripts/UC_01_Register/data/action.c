Action()
{

	lr_start_transaction("1_transaction");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("Name200", 
		lr_unmask("65f2dad58a19491b038a95ae3dd7"), 
		"www.advantageonlineshopping.com:443");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710412573.4.1.1710414337.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.2.1042891913.1710324251; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.547533233.1710324287; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414249.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1710412573.4.1.1710414362.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.1.1042891913.1710324251; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

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

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

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

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(4);

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

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

	lr_end_transaction("1_transaction",LR_AUTO);

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("sec-ch-ua", 
		"\"Not_A Brand\";v=\"8\", \"Chromium\";v=\"120\", \"YaBrowser\";v=\"24.1\", \"Yowser\";v=\"2.5\"");

	web_add_header("sec-ch-ua-arch", 
		"\"x86\"");

	web_add_header("sec-ch-ua-bitness", 
		"\"64\"");

	web_add_header("sec-ch-ua-full-version", 
		"\"24.1.3.809\"");

	web_add_header("sec-ch-ua-full-version-list", 
		"\"Not_A Brand\";v=\"8.0.0.0\", \"Chromium\";v=\"120.0.6099.234\", \"YaBrowser\";v=\"24.1.3.809\", \"Yowser\";v=\"2.5\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-model", 
		"\"\"");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_header("sec-ch-ua-platform-version", 
		"\"15.0.0\"");

	web_add_header("sec-ch-ua-wow64", 
		"?0");

	web_url("ALV-UjUnHH9f4UaHuxs1zKrDvLfHzQEvTxGtU2diCck6nTMBIQ=s50-c-k-no", 
		"URL=https://lh3.googleusercontent.com/a-/ALV-UjUnHH9f4UaHuxs1zKrDvLfHzQEvTxGtU2diCck6nTMBIQ=s50-c-k-no", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://docs.google.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("create_new_account");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

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

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("create_new_account",LR_AUTO);

	lr_start_transaction("register");

	web_add_auto_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountCreateRequest");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address></address><allowOffersPromotion>true</allowOffersPromotion><cityName></cityName><countryId>United States,us</countryId><email>email20@yandex.ru</email>"
		"<firstName></firstName><lastName></lastName><loginName>Name20</loginName><password>Password20</password><phoneNumber></phoneNumber><stateProvince></stateProvince><zipcode></zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("AccountCreateRequest_2", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address></address><allowOffersPromotion>true</allowOffersPromotion><cityName></cityName><countryId>United States,us</countryId><email>email20@yandex.ru</email>"
		"<firstName></firstName><lastName></lastName><loginName>Name200</loginName><password>Password20</password><phoneNumber></phoneNumber><stateProvince></stateProvince><zipcode></zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414512.60.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_revert_auto_header("SOAPAction");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>email20@yandex.ru</email><loginPassword>Password20</loginPassword><loginUser>Name200</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_add_cookie("_ga_56EMNRF2S2=GS1.2.1710412615.4.1.1710414515.57.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("571301247", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/571301247", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("register",LR_AUTO);

	return 0;
}