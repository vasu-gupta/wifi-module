#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

char*ssid="example.com"; //set the hosting website to connect
char*password="*******"; //keep your password

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
