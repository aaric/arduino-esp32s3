# arduino_esp32s3

> ESP32-S3 Dev With Arduino.

## esp32_ch03_btn4

![esp32_ch03_btn4.jpg](esp32_ch03_btn4/esp32_ch03_btn4.jpg)

## esp32_ch05_pwm_ledc

&emsp;&emsp;`esp32_hal_led.h`

```cpp
// 设置频率和分辨率
uint32_t tledcSetup(uint8_t channel, uint3_t freq, uint8_t resolution_bits);
// 设置通道占空比
void ledcwrite(uint8_t channel, uint32_t duty);
// 设置无源蜂鸣器发声
uint32_t tledcWriteTone(uint8_t channel, uint32_t freq);
// 设置输出指定调式和音阶声音的信号
uint32_t tledcWriteNote(uint8_t channel, note_t note, uint8_t octave);
// 返回通道占空比
uint32_t ledcRead(uint8_t channel);
// 返回通道频率
uint32_t ledcReadFreq(uint8_t channel);
// 绑定LEDC功能
void ledcAttachPin(uint8_t pin, uint8_t channel);
// 解除LEDC功能
void ledcDetachpin(uint8_t pin);
```

1. 使用 `ledcsetup()` 函数建立 LEDC 通道；
2. 通过 `ledcAttachPin()` 将 GPIO 囗与 LEDC 通道关联；
3. 通过 `ledcwrite()、ledcwriteTone()、ledcwriteNote()` 设置频率、设置蜂鸣器音调等；
4. 通过 `ledcDetachPin()` 解除 GPIO 囗与 LEDC 通道的关联。
