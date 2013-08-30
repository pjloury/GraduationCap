/*
 Tri-Color LED Breakout - An example sketch for the Tri-Color LED Breakout
 By: Hilary Hoops
 SparkFun Electronics
 Date: 6/23/11
 License: CC-BY SA 3.0 - Creative commons share-alike 3.0
 use this code however you'd like, just keep this license and
 attribute. Let me know if you make hugely, awesome, great changes.
 */
  
int RedLED = 9;     // LED connected to digital pin 9 (pwm pin)
int GrnLED = 10;    // LED connected to digital pin 10 (pwm pin)
int BluLED = 11;    // LED connected to digital pin 11 (pwm pin)
int LED[3]={RedLED, GrnLED,BluLED}; //an array to make it easier to cycle though 
//the LED colors
int buttonState = 0;


void setup()  { 
  //Set pins as output pins
  pinMode(RedLED, OUTPUT);   
  pinMode(GrnLED, OUTPUT);   
  pinMode(BluLED, OUTPUT); 

void loop()  {
    
  
  //Fade each LED in and out individually. Possible range is 0-255
  for(int i=0; i<3;i++){ //Cycle LED color
    //Fade in
    for(int fade=0; fade<=255; fade+=5){
        analogWrite(LED[i], fade); 
        delay(10);
    }
    //Fade out
    for(int fade=255; fade>=0; fade-=5){
        analogWrite(LED[i], fade); 
        delay(10);
    }
  }
  //Fade all the LEDs in and out 
  //Fade in
  for(int fade=0; fade<=255; fade+=5){
      analogWrite(RedLED, fade); 
      analogWrite(GrnLED, fade); 
      analogWrite(BluLED, fade); 
      delay(30);
  }
  //Fade out
  for(int fade=255; fade>=0; fade-=5){
      analogWrite(RedLED, fade); 
      analogWrite(GrnLED, fade); 
      analogWrite(BluLED, fade); 
      delay(30);
  }
}
