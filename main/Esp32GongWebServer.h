#ifndef MAIN_Esp32GongWebServer_H_
#define MAIN_Esp32GongWebServer_H_

#include "ota.h"
#include "freertos/FreeRTOS.h"
#include "openssl/ssl.h"
#include "WebServer.h"

class DisplayCharter;

class Esp32GongWebServer : public WebServer{
public:
	Esp32GongWebServer();
	virtual ~Esp32GongWebServer();

	bool StartWebServer();

	virtual bool HandleRequest(HttpRequestParser& httpParser, HttpResponse& httpResponse);
	virtual DownAndUploadHandler* HandleUploadRequest(String& sUrl);


private:
	bool mbRestart;

	Ota mOta;

};

#endif 
