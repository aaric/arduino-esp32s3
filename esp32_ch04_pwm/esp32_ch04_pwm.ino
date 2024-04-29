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

void led_pwm() {
  for(int i = 0; i < 256; i++) {
    analogWrite(led_r, i);
    delay(10);
  }
  for(int i = 255; i >= 0; i--) {
    analogWrite(led_r, i);
    delay(10);
  }
}

void setup() {
  led_init();
}

void loop() {
  led_pwm();
}
