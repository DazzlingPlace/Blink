int LED_1 = 10;
int LED_2 = 11;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  Scheduler.startLoop(loop2);
}

void loop() {
  digitalWrite(LED_1, HIGH);
  delay(2000);
  digitalWrite(LED_1, LOW);
  delay(2000);
}


void loop2(){
  digitalWrite(LED_2, 1);
  delay(500);
  digitalWrite(LED_2, 0);
  delay(500);
  yield();
} 
