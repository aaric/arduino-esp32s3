int led_r = 4;
int led_y = 5;
int led_g = 6;
int led_pin_list[] = {led_r, led_y, led_g};
int led_pin_length = sizeof(led_pin_list) / sizeof(led_pin_list[0]);

void led_init() {
  for(int i = 0; i < led_pin_length; i++) {
    pinMode(led_pin_list[i], OUTPUT);
  }
}

void led_on() {
  for(int i = 0; i < led_pin_length; i++) {
    digitalWrite(led_pin_list[i], HIGH);
  }
}

void led_off() {
  for(int i = 0; i < led_pin_length; i++) {
    digitalWrite(led_pin_list[i], LOW);
  }
}

void setup() {
  led_init();
}

void loop() {
  led_on();
  delay(1000);
  led_off();
  delay(1000);
}
