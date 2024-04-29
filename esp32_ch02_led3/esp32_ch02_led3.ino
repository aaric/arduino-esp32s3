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
    delay(500);
  }
}

void led_off() {
  for(int i = 0; i < led_pin_length; i++) {
    digitalWrite(led_pin_list[i], LOW);
    delay(500);
  }
}

int led_count = 0;

void led_run() {
  int led_idx = led_count % led_pin_length;
  led_count++;
  
  for(int i = 0; i < led_pin_length; i++) {
    digitalWrite(led_pin_list[i], LOW);
  }

  digitalWrite(led_pin_list[led_idx], HIGH);
  delay(500);
}

void setup() {
  led_init();
}

void loop() {
  //led_on();
  //led_off();

  led_run();
}
