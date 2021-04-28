#include <Arduino.h>

#include "../.pio/libdeps/uno/FastLED/FastLED.h"

#define LED_PIN 13
#define NUM_LEDS 20

CRGB leds[NUM_LEDS];

void setup() {
    CFastLED::addLeds<WS2812B, LED_PIN>(leds, NUM_LEDS);
}

void loop() {
    for (auto & led : leds) {
        led = HUE_GREEN;
    }
    FastLED.show();
    delay(500);

    for (auto & led : leds) {
        led = CRGB::Black;
    }
    FastLED.show();
    delay(500);

}
