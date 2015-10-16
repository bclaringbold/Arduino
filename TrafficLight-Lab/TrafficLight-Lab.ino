/*
This program resembles a basic traffic light.
It cycles between 3 different coloured LEDs
*/

int buzzer = 8; //Connect the buzzer Pin to Digital Pin 8
int buzzer2 = 9; //Connect the buzzer2 Pin to Digital Pin 8

int greenLed = 9; //Connect green LED to Digital Pin 9
int yellowLed = 10; //Connect yellow LED to Digital Pin 10
int redLed = 11; //Connect red LED to Digital Pin 11

int greenLed2 = 2; //Connect green LED to Digital Pin 9
int yellowLed2 = 3; //Connect yellow LED to Digital Pin 10
int redLed2 = 4; //Connect red LED to Digital Pin 11

int greenTimer = 5000; //Time that the light is Green in each direction
int yellowTimer = 3000; //Time the llight is Yellow in each direction
int redTimer = 2000; // Time where both lights are Red

int advancedGreenTimer = 500;


void setup()
{ //start of setup
  pinMode(buzzer, OUTPUT); //Set Pin Mode as output
  pinMode(buzzer2, OUTPUT); //Set Pin Mode as output

  pinMode(greenLed, OUTPUT); //Set ledPin as output
  pinMode(yellowLed, OUTPUT); //Set ledPin as output
  pinMode(redLed, OUTPUT); //Set ledPin as output

  pinMode(greenLed2, OUTPUT); //Set ledPin as output
  pinMode(yellowLed2, OUTPUT); //Set ledPin as output
  pinMode(redLed2, OUTPUT); //Set ledPin as output


}  //end of setup

void loop()
{
  digitalWrite(redLed2, HIGH); //Set red 2 LED to high (stop E-W traffic)

  //advanced Green North / South - 5 seconds
  //loop
  for (int i = 0; i < 4; i++) {
    digitalWrite(greenLed, HIGH); //Advanced Green for North South traffic
    delay(advancedGreenTimer); //Wait
    digitalWrite(greenLed, LOW);
    delay(advancedGreenTimer); //Wait
  }

  digitalWrite(greenLed, HIGH); //Green for North South traffic
  delay(greenTimer); //Wait 5 second
  digitalWrite(greenLed, LOW); //Set green LED to low

  digitalWrite(yellowLed, HIGH); //Yellow for North South traffic
  delay(yellowTimer); //Delay 3 second
  digitalWrite(yellowLed, LOW); //Set yellow LED to low

  digitalWrite(redLed, HIGH); // Red on for North South traffic

  delay(redTimer); //Delay 2 second // Red in both directions for 2 seconds

  digitalWrite(redLed2, LOW); //Red off for East West Traffic

  for (int i = 0; i < 4; i++) {
    digitalWrite(greenLed2, HIGH); //Advanced Green for East West traffic
    delay(advancedGreenTimer); //Wait
    digitalWrite(greenLed2, LOW);
    delay(advancedGreenTimer); //Wait
  }

  digitalWrite(greenLed2, HIGH); //Green on for East West Traffic
  delay(greenTimer); //Wait 5 second
  digitalWrite(greenLed2, LOW); //Set green LED to low

  digitalWrite(yellowLed2, HIGH); //Yellow on for East West Traffic
  delay(yellowTimer); //Delay 3 second
  digitalWrite(yellowLed2, LOW); //Set yellow LED to low

  digitalWrite(redLed2, HIGH); //Red on for East West Traffic
  delay(redTimer); //Delay 2 second // Red in both directions for 2 seconds
  digitalWrite(redLed, LOW); //Red off for North South traffic

}//end of loop
