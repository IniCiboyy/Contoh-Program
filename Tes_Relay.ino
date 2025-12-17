
#define RELAY1 13
#define RELAY2 12
#define RELAY3 14
#define RELAY4 27

// Waktu ON/OFF relay dalam milidetik
#define DELAY_TIME 2000

void setup() {
  Serial.begin(115200);
  Serial.println("\n=== MULAI TES RELAY 2 CHANNEL (ESP32) ===");

  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);

  // Pastikan relay awalnya OFF
  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);

  Serial.println("Inisialisasi selesai. Memulai siklus tes...\n");
  delay(1000);
}

void loop() {
  // Tahap 1: Nyalakan Relay 1
  Serial.println("Relay 1 ON");
  digitalWrite(RELAY1, LOW);
  delay(DELAY_TIME);

  Serial.println("Relay 1 OFF");
  digitalWrite(RELAY1, HIGH);
  delay(DELAY_TIME);

  // Tahap 2: Nyalakan Relay 2
  Serial.println("Relay 2 ON");
  digitalWrite(RELAY2, LOW);
  delay(DELAY_TIME);

  Serial.println("Relay 2 OFF");
  digitalWrite(RELAY2, HIGH);
  delay(DELAY_TIME);

  // Tahap 3: Nyalakan Relay 3
  Serial.println("Relay 3 ON");
  digitalWrite(RELAY3, LOW);
  delay(DELAY_TIME);

  Serial.println("Relay 3 OFF");
  digitalWrite(RELAY3, HIGH);
  delay(DELAY_TIME);

  // Tahap 4: Nyalakan Relay 4
  Serial.println("Relay 4 ON");
  digitalWrite(RELAY4, LOW);
  delay(DELAY_TIME);

  Serial.println("Relay 4 OFF");
  digitalWrite(RELAY4, HIGH);
  delay(DELAY_TIME);  

  // Tahap 3: Nyalakan keduanya untuk uji beban simultan
  Serial.println("Kedua Relay ON bersamaan");
  digitalWrite(RELAY1, LOW);
  digitalWrite(RELAY2, LOW);
  digitalWrite(RELAY3, LOW);
  digitalWrite(RELAY4, LOW);
  delay(DELAY_TIME);

  Serial.println("Kedua Relay OFF bersamaan");
  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);
  delay(DELAY_TIME);

  Serial.println("=== SIKLUS TES SELESAI ===\n");
  delay(3000); // jeda sebelum mulai ulangi
}
