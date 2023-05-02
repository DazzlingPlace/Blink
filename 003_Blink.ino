constexpr uint8_t LED_1 = 10;
constexpr uint8_t LED_2 = 11;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop() {
  FirstLED();
  SecondLED();
}


void FirstLED(){
  static uint32_t tmr;
  if (millis() - tmr >= 2000){
    tmr = millis();
    digitalWrite(LED_1, !digitalRead(LED_1));
  }
}

void SecondLED(){
  static uint32_t tmr;
  if (millis() - tmr >= 500){
    tmr = millis();
    digitalWrite(LED_2, !digitalRead(LED_2));
  }
}
