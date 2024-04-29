int led_r = 4;

void setup() {
  pinMode(led_r, OUTPUT);
}

void loop() {
  digitalWrite(led_r, HIGH);
  delay(1000);
  digitalWrite(led_r, LOW);
  delay(1000);
}
