//By Sugith Kandiah

int red = 7;
int yellow = 8;
int green = 9;

void setup() {
  //pinMode function is used to configure a specific pin on the Arduino board as either an input or an output. 
  pinMode (red, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (green, OUTPUT);

}

void loop() {
  //the digitalWrite function is used to set the state of a digital output pin
  // HIGH (sets the led on) and LOW (sets the led off)
  
  //GO
  digitalWrite(green, HIGH);
  delay(8000); //delayed for 8 seconds 
  digitalWrite(green,  LOW);
 
 //I repeated the sequence for the the yellow LED beacuase I wanted the blinking the indicate the driver to slow down 
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow,  LOW);
  delay(500);

  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow,  LOW);
  delay(500);

  digitalWrite(yellow, HIGH);
  delay(1000);  
  digitalWrite(yellow, LOW);
  delay(500);
  
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(500);
  
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(500);
  
  //STOP
  digitalWrite(red, HIGH);
  delay(8000);
  digitalWrite(red,  LOW);
  }
