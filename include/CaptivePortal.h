#ifndef _CAPTIVE_PORTAL_H_
#define _CAPTIVE_PORTAL_H_

#include <Arduino.h>
#include <ESP8266WebServer.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

extern ESP8266WebServer webserver(80);

class CaptivePortal
{
public:
    struct WIFI
    {
        const char  *SSID, *PSWD;
    };
    
    CaptivePortal(const WIFI wifi_credentials);
    void handleRoot();
};

CaptivePortal::CaptivePortal(const WIFI wifi_credentials)
{
    Serial.print("Configuring access point...");
    WiFi.softAP(wifi_credentials.SSID, wifi_credentials.PSWD);

    IPAddress myIP = WiFi.softAPIP();
    Serial.print("AP IP address: ");
    Serial.println(myIP);
    webserver.on("/", handleRoot);
    webserver.begin();
    Serial.println("HTTP server started");

    //new ESP8266WebServer(80) webserver;
}

void CaptivePortal::handleRoot() 
{
  webserver.send(200, "text/html", "<h1>You are connected</h1>");
}

#endif