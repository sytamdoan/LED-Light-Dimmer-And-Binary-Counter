int digit0 = 11;
int digit1 = 10;
int digit2 = 6;
int digit3 = 5;
int timeDelay = 300;
int sensor = A0;
int reading = analogRead(sensor);
int brightness = map(reading,0,1023,0,255);
int wait = 0;
/*
 Author: Tam Doan
 Description: This project counts binary from 0 to 15 with LED lights. In addition, a potentiometer is also used to dim the lights as
 the lights are counting up.
*/
 
void setup() {
  // put your setup code here, to run once:
  pinMode(digit0,OUTPUT);
  pinMode(digit1,OUTPUT);
  pinMode(digit2,OUTPUT);
  pinMode(digit3,OUTPUT);
  Serial.begin(9600);

}

void loop() {

 /*
 Each of these while loops waits 500 millisecond until the next binary number is displayed on the LED.
 During this wait time, the code checks the the value of the potentiometer and map it into a value of 0-255. This value then determines the brightness
 of each LED. This while loop can also be replaced with a for loop, which would probably be better.
 */
 
  while(wait < timeDelay) {
    takeAnalog();
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,LOW);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;

  while(wait < timeDelay) {
    takeAnalog();
    analogWrite(digit0,brightness);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,LOW);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;


  while(wait < timeDelay) {
    takeAnalog();
    digitalWrite(digit0,LOW);
    analogWrite(digit1,brightness);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,LOW);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;
 
  while(wait < timeDelay) {
    takeAnalog();
    analogWrite(digit0,brightness);
    analogWrite(digit1,brightness);
    digitalWrite(digit2,LOW);
    digitalWrite(digit3,LOW);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;

  while(wait < timeDelay) {
    takeAnalog();
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,LOW);
    analogWrite(digit2,brightness);
    digitalWrite(digit3,LOW);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;
  
  while(wait < timeDelay) {
    takeAnalog();
    analogWrite(digit0,brightness);
    digitalWrite(digit1,LOW);
    analogWrite(digit2,brightness);
    digitalWrite(digit3,LOW);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;

  while(wait < timeDelay) {
    takeAnalog();
    digitalWrite(digit0,LOW);
    analogWrite(digit1,brightness);
    analogWrite(digit2,brightness);
    digitalWrite(digit3,LOW);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;

  while(wait < timeDelay) {
    takeAnalog();
    analogWrite(digit0,brightness);
    analogWrite(digit1,brightness);
    analogWrite(digit2,brightness);
    digitalWrite(digit3,LOW);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;
  
  while(wait < timeDelay) {
    takeAnalog();
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,LOW);
    analogWrite(digit3,brightness);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;

  while(wait < timeDelay) {
    takeAnalog();
    analogWrite(digit0,brightness);
    digitalWrite(digit1,LOW);
    digitalWrite(digit2,LOW);
    analogWrite(digit3,brightness);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;

  while(wait < timeDelay) {
    takeAnalog();
    digitalWrite(digit0,LOW);
    analogWrite(digit1,brightness);
    digitalWrite(digit2,LOW);
    analogWrite(digit3,brightness);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;

  while(wait < timeDelay) {
    takeAnalog();
    analogWrite(digit0,brightness);
    analogWrite(digit1,brightness);
    digitalWrite(digit2,LOW);
    analogWrite(digit3,brightness);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;
  
  while(wait < timeDelay) {
    takeAnalog();
    digitalWrite(digit0,LOW);
    digitalWrite(digit1,LOW);
    analogWrite(digit2,brightness);
    analogWrite(digit3,brightness);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;

  while(wait < timeDelay) {
    takeAnalog();
    analogWrite(digit0,brightness);
    digitalWrite(digit1,LOW);
    analogWrite(digit2,brightness);
    analogWrite(digit3,brightness);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;

  while(wait < timeDelay) {
    takeAnalog();
    digitalWrite(digit0,LOW);
    analogWrite(digit1,brightness);
    analogWrite(digit2,brightness);
    analogWrite(digit3,brightness);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;
  

  while(wait < timeDelay) {
    takeAnalog();
    analogWrite(digit0,brightness);
    analogWrite(digit1,brightness);
    analogWrite(digit2,brightness);
    analogWrite(digit3,brightness);
    delay(1);
    wait = wait + 1;
  }
  wait = 0;


}
/*
 This function takes the reading value of the potentiometer (0-1023) and maps it linearly to 0-255, something that the arduino can read and display
 on the LED.
*/
void takeAnalog() {
    reading = analogRead(sensor);
    brightness = map(reading,0,1023,1,255);
}
