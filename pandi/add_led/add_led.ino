#include <FastLED.h>

#define LED_PIN     10
#define NUM_LEDS    120

CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  for(int i=0;i<8;i++){
    for(int j=0;j<15;j++){
      leds[(15*i)+j] = CRGB(255, 255, 255);
      FastLED.show();
      }
    delay(1000);
    for(int j=0;j<15;j++){
      leds[(15*i)+j] = CRGB(0, 0, 0);
      FastLED.show();
      }
    }
}
