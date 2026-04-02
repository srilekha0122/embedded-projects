#include <stdio.h>
#include <unistd.h>

#define LED_1_PIN  14
#define LED_1_MS   500

void digitalWrite(int pin, int value) {
    printf("LED (pin %d): %s\n", pin, value ? "ON" : "OFF");
}
void delay(int ms) { usleep(ms * 1000); }

int main(void) {
    while (1) {
        digitalWrite(LED_1_PIN, 1); delay(LED_1_MS);
        digitalWrite(LED_1_PIN, 0); delay(LED_1_MS);
    }
    return 0;
}
