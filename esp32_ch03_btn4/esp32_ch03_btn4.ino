int led_r = 4;
int led_y = 5;
int led_g = 6;
int led_pin_list[] = {led_r, led_y, led_g};
int led_pin_length = sizeof(led_pin_list) / sizeof(led_pin_list[0]);

int btn_k1 = 35;
int btn_k2 = 36;
int btn_k3 = 37;
int btn_k4 = 38;
int btn_pin_list[] = {btn_k1, btn_k2, btn_k3, btn_k4};
int btn_pin_length = sizeof(btn_pin_list) / sizeof(btn_pin_list[0]);

void led_init() {
  for(int i = 0; i < led_pin_length; i++) {
    pinMode(led_pin_list[i], OUTPUT);
  }
}

void btn_init() {
  for(int i = 0; i < led_pin_length; i++) {
    //pinMode(btn_pin_list[i], INPUT_PULLDOWN);
    pinMode(btn_pin_list[i], INPUT_PULLUP);
  }
}

bool btn_click(int btn_pin) {
  bool flag = false;
  //if(digitalRead(btn_pin)) {
  if(0 == digitalRead(btn_pin)) {
    delay(10);
    //if(digitalRead(btn_pin)) {
    if(0 == digitalRead(btn_pin)) {
      flag = true;
    }
  }
  return flag;
}

void setup() {
  led_init();
  btn_init();
}

void loop() {
  digitalWrite(led_g, HIGH);
  bool flag = btn_click(btn_k1);
  if(flag) {
    digitalWrite(led_r, HIGH);
  } else {
    digitalWrite(led_r, LOW);
  }
  delay(500);
}
