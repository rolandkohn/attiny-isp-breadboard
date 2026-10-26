// Blink test for the ATtiny84A breadboard ISP.
// LED with 220–330 Ω on pin 10 (PA3).
// 1 s per cycle  = fuses set to 8 MHz, all good.
// 8 s per cycle  = "Burn Bootloader" was skipped, chip runs at 1 MHz.

void setup() { pinMode(PIN_PA3, OUTPUT); }

void loop() {
  digitalWrite(PIN_PA3, HIGH); delay(500);
  digitalWrite(PIN_PA3, LOW);  delay(500);
}
