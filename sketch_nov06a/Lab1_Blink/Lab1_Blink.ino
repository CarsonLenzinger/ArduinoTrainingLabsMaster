/*Programmer: Carson Lenzinger
 * Date: 11.6.19
 * Program: Blink
 * 
 * This program will turn on an LED for specified amounts of time, turn it off, and back on in a While Loop.
 * 
 * Programmer: Carson Lenzinger
 * Date: 11.6.19
 * Program: digitalRead() & the Serial Port
 * 
 * Reads a digital input on pin2, prints the results to the serial monitor.
 *
 */

//initialize our led to Pin 13
int led = 13;

//digital pin2 has a push button attached to it
int pushButton = 3;

void setup() {
  // put your setup code here, to run once:
  //Using the Function pinMode to call led and provide Output
  pinMode(led, OUTPUT);

  //initializes serial communication at 9600 bits per second
 Serial.begin(9600);
 //make pushButton pin an input
 pinMode(pushButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(pushButton);
  //print out the state of the button
  Serial.println(buttonState);
  if (buttonState==HIGH){
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);
  }
  //read the input pin

// print out the state of the button
Serial.println(buttonState);
delay(250);  // delay in between readings for stability
  }
