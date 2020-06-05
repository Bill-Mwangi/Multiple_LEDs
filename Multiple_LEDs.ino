//8 LEDs
int ledPins[] = {2,3,4,5,6,7,8,9};
void setup() {
  // put your setup code here, to run once:
 for(int i = 0;i <= 7; i++){
 pinMode(ledPins[i],OUTPUT);
 }
}

void loop() {
  for(int i = 0; i <=7; i++){
    digitalWrite(ledPins[i],HIGH);
    delay(100);
    digitalWrite(ledPins[i],LOW);
    delay(100);
  }
  

}
