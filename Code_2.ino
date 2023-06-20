#include <WiFi.h>

const char* ssid = "WiFi_SSID";
const char* password = "WiFi_PASSWORD";

const int relayPins[] = {23, 21, 22, 19};

const int numRelays = sizeof(relayPins) / sizeof(relayPins[0]);

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("WiFi bağlantısı bekleniyor...");
  }
  Serial.println("WiFi bağlandı!");

  for (int i = 0; i < numRelays; i++) {
    pinMode(relayPins[i], OUTPUT);
  }

  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], HIGH);
  }
}

void loop() {

  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(1000);
  }

  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], HIGH);
    delay(1000);
  }
}
