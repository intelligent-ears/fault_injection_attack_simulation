#define GLITCH_PIN 25

void setup() {
  pinMode(GLITCH_PIN, OUTPUT);
  digitalWrite(GLITCH_PIN, LOW);
  Serial.begin(115200);
  Serial.println("Manual Glitch Ready");
}

void loop() {
  delay(3000);  

  Serial.println("⚡ Triggering glitch...");
  digitalWrite(GLITCH_PIN, HIGH);
  delayMicroseconds(100); 
  digitalWrite(GLITCH_PIN, LOW);

  delay(3000); 
}
