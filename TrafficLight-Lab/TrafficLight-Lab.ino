/*
This program resembles a basic traffic light.
It cycles between 3 different coloured LEDs
and buzzes in between light changes.
*/

 int buzzer=8;//Connect the buzzer Pin to Digital Pin 8  
 int greenLed=9; //Connect green LED to Digital Pin 9
 int yellowLed=10; //Connect yellow LED to Digital Pin 10
 int redLed=11; //Connect red LED to Digital Pin 11

 int greenLed2=2; //Connect green LED to Digital Pin 9
 int yellowLed2=3; //Connect yellow LED to Digital Pin 10
 int redLed2=4; //Connect red LED to Digital Pin 11

void setup() 
{  //start of setup
  pinMode(buzzer,OUTPUT);//Set Pin Mode as output
  
  pinMode(greenLed,OUTPUT);//Set ledPin as output 
  pinMode(yellowLed,OUTPUT);//Set ledPin as output 
  pinMode(redLed,OUTPUT);//Set ledPin as output  

  pinMode(greenLed2,OUTPUT);//Set ledPin as output 
  pinMode(yellowLed2,OUTPUT);//Set ledPin as output 
  pinMode(redLed2,OUTPUT);//Set ledPin as output 

  
}  //end of setup

void loop() 
{ 
   digitalWrite(redLed2,HIGH); //Set red LED to high  
         
   digitalWrite(greenLed,HIGH); //Set green LED to high  
   delay(5000); //Wait 1 second 
   digitalWrite(greenLed,LOW); //Set green LED to low 
   
   digitalWrite(yellowLed,HIGH); //Set yellow LED to high  
   delay(3000); //Delay 1 second 
   digitalWrite(yellowLed,LOW); //Set yellow LED to low
   
   digitalWrite(redLed,HIGH); //Set red LED to high  
   delay(2000); //Delay 1 second 
   
   digitalWrite(redLed2,LOW); //Set red LED to low   

   digitalWrite(greenLed2,HIGH); //Set green LED to high  
   delay(5000); //Wait 1 second 
   digitalWrite(greenLed2,LOW); //Set green LED to low 
   
   digitalWrite(yellowLed2,HIGH); //Set yellow LED to high  
   delay(3000); //Delay 1 second 
   digitalWrite(yellowLed2,LOW); //Set yellow LED to low
   
   digitalWrite(redLed2,HIGH); //Set red LED to high  
   delay(2000); //Delay 1 second 
   digitalWrite(redLed,LOW); //Set red LED to low
   
}//end of loop
