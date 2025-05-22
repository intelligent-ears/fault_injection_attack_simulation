#define GLITCH_INPUT_PIN 5  
String correct_password = "secret42";

void setup() {
  Serial.begin(115200);
  pinMode(GLITCH_INPUT_PIN, INPUT);
}

void loop() {
  delay(1000);

  String input_password = "secret42";

  if (digitalRead(GLITCH_INPUT_PIN) == HIGH) {
    input_password = "wrong"; 
  }

  if (input_password == correct_password) {
    Serial.println("✅ Access Granted");
  } else {
    Serial.println("❌ Access Denied");
  }

  delay(2000);
}
