const int led = LED_BUILTIN;

void setup() {
    // Start the USB Serial communication
    Serial.begin(9600);

    // Wait for the serial monitor to open
    // Timeout of 5 seconds
    unsigned long startTime = millis();
    while (!Serial) {
        if (millis() - startTime > 2000) {  // 5000 milliseconds = 5 seconds
            break;                          // Exit the loop after 5 seconds
        }
    }

    Serial.println("Teensy is online with USB Serial!");

    // Set pin 13 as an output (onboard LED)
    pinMode(led, OUTPUT);
}
void loop() {
    // Blink the LED every 3 seconds
    digitalWrite(led, HIGH);  // Turn the LED on
    Serial.println("LED ON");
    delay(3000);  // Wait for 3 seconds

    digitalWrite(led, LOW);  // Turn the LED off
    Serial.println("LED OFF");
    delay(3000);  // Wait for 3 seconds
}