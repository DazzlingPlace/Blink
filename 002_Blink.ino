int LED_1 = 10;
int LED_2 = 11;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop() {
  digitalWrite(LED_1, HIGH);
  delay(2000);
  digitalWrite(LED_1, LOW);
  delay(2000);
}


void yield(){
  digitalWrite(LED_2, 1);
  delay(2000);
  digitalWrite(LED_2, 0);
  delay(2000);
} 