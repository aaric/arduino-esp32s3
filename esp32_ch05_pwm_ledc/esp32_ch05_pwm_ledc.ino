#define FREQ       2000
#define CHANNEL    0
#define RESOLUTION 8
#define LED_R      4

void led_init() {
  ledcSetup(CHANNEL, FREQ, RESOLUTION);
  ledcAttachPin(LED_R, CHANNEL);
}

void led_pwm_ledc() {
  for(int i = 0; i < pow(2, RESOLUTION); i++) {
    ledcWrite(CHANNEL, i);
    delay(10);
  }
  for(int i = pow(2, RESOLUTION) - 1; i >= 0; i++) {
    ledcWrite(CHANNEL, i);
    delay(10);
  }
}

void setup() {
  led_init();
}

void loop() {
 led_pwm_ledc();
}
