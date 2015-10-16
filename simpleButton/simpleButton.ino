

int buttonPin = 11;
int buttonPin2 = 10;
int ledPin = 13;
bool data;
bool data2;

void setup() {
  // put your setup code here, to run once:

pinMode(buttonPin, INPUT);
pinMode(buttonPin2, INPUT);
pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

data = digitalRead(buttonPin);
data2 = digitalRead(buttonPin2);

if (data == HIGH){
  
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  }
 else
 {
    digitalWrite(ledPin, LOW);
  }

  if (data2 == HIGH){
  
    digitalWrite(ledPin, HIGH);
   
  }
 else
 {
    digitalWrite(ledPin, LOW);
  }

}
