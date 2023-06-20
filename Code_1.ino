#include <WiFi.h>

const char* ssid = "WiFi_SSID";
const char* password = "WiFi_PASSWORD";

// Röle pinleri
const int relay1Pin = 23;  
const int relay2Pin = 21;
const int relay3Pin = 22;
const int relay4Pin = 19;

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("WiFi bağlantısı bekleniyor...");
  }
  Serial.println("WiFi bağlandı!");

  pinMode(relay1Pin, OUTPUT);
  pinMode(relay2Pin, OUTPUT);
  pinMode(relay3Pin, OUTPUT);
  pinMode(relay4Pin, OUTPUT);

  digitalWrite(relay1Pin, HIGH);
  digitalWrite(relay2Pin, HIGH);
  digitalWrite(relay3Pin, HIGH);
  digitalWrite(relay4Pin, HIGH);
}

void loop() {

  digitalWrite(relay1Pin, LOW);
  delay(1000);

  digitalWrite(relay1Pin, HIGH);
  delay(1000);

  digitalWrite(relay2Pin, LOW);
  delay(1000);

  digitalWrite(relay2Pin, HIGH);
  delay(1000);

  digitalWrite(relay3Pin, LOW);
  delay(1000);

  digitalWrite(relay3Pin, HIGH);
  delay(1000);

  digitalWrite(relay4Pin, LOW);
  delay(1000);

  digitalWrite(relay4Pin, HIGH);
  delay(1000);
}
