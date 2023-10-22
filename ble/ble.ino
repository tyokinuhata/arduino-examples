#include <ArduinoBLE.h>

const int LED_DISCONNECTED = 2;
const int LED_CONNECTED = 3;

void setup() {
  pinMode(LED_DISCONNECTED, OUTPUT);
  pinMode(LED_CONNECTED, OUTPUT);
  
  // BLEデバイスを初期化
  if (!BLE.begin()) {
    // デバイスの初期化が失敗した場合は停止
    while (1);
  }
  
  // BLEのローカル名とUUIDv4を設定
  BLE.setLocalName("MyBLEDevice");
  BLE.setAdvertisedServiceUuid("8287eddb-d5be-4f69-a552-a605861baf78");

  // BLEのアドバタイズを開始
  BLE.advertise();
}

void loop() {
  // 新しいセントラルが接続を試みるのを待機
  BLEDevice central = BLE.central();

  // セントラルが接続された場合
  if (central) {
    digitalWrite(LED_DISCONNECTED, LOW);
    while (central.connected()) {
      digitalWrite(LED_CONNECTED, HIGH);
      delay(500);
      digitalWrite(LED_CONNECTED, LOW);
      delay(500);
    }
  // セントラルが接続されていない場合
  } else {
    digitalWrite(LED_CONNECTED, LOW);
    digitalWrite(LED_DISCONNECTED, HIGH);
    delay(500);
    digitalWrite(LED_DISCONNECTED, LOW);
    delay(500);
  }
}
