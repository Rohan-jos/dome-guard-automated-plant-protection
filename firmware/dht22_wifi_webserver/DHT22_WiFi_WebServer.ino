#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>
#include <DHT.h>

// Replace these placeholders locally. Never publish real Wi-Fi credentials.
const char *ssid = "YOUR_WIFI_SSID";
const char *password = "YOUR_WIFI_PASSWORD";

WebServer server(80);
DHT dht(26, DHT22);

float readDHTTemperature();
float readDHTHumidity();

void handleRoot() {
  char msg[1500];

  snprintf(msg, sizeof(msg),
           "<!DOCTYPE html>"
           "<html><head>"
           "<meta http-equiv='refresh' content='4'/>"
           "<meta name='viewport' content='width=device-width, initial-scale=1'>"
           "<title>ESP32 DHT Server</title>"
           "<style>"
           "html{font-family:Arial;text-align:center;margin:0 auto;}"
           "h2{font-size:2.2rem;}p{font-size:2rem;}"
           ".units{font-size:1rem;}"
           ".dht-labels{font-size:1.2rem;vertical-align:middle;}"
           "</style></head><body>"
           "<h2>ESP32 DHT Server</h2>"
           "<p><span class='dht-labels'>Temperature: </span>"
           "<span>%.2f</span><sup class='units'>&deg;C</sup></p>"
           "<p><span class='dht-labels'>Humidity: </span>"
           "<span>%.2f</span><sup class='units'>&percnt;</sup></p>"
           "</body></html>",
           readDHTTemperature(), readDHTHumidity());

  server.send(200, "text/html", msg);
}

void setup(void) {
  Serial.begin(115200);
  dht.begin();

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println();

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp32")) {
    Serial.println("MDNS responder started");
  }

  server.on("/", handleRoot);
  server.begin();
  Serial.println("HTTP server started");
}

void loop(void) {
  server.handleClient();
  delay(2);
}

float readDHTTemperature() {
  float t = dht.readTemperature();
  if (isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return -1;
  }

  Serial.println(t);
  return t;
}

float readDHTHumidity() {
  float h = dht.readHumidity();
  if (isnan(h)) {
    Serial.println("Failed to read from DHT sensor!");
    return -1;
  }

  Serial.println(h);
  return h;
}
