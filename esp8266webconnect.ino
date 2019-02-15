#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

char*ssid="iitiot000webhostapp.com";
char*password="1234567890-=";

void setup() {
  // put your setup code here, to run once:
  WiFi.begin(ssid,passsword);
  Serial.begin(115200);
  while(WiFi.status()!=WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println("");
  Serial.print("IP Adress:");
  Serial.println(WiFi.localIP());

  server.on("/",[](){Server.send(200,"text/plain","Hello World!");});
  server.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

}
