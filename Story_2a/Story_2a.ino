int rev_left = 12;
int other_led = 11;

// Functions

void rover_forward(){
  
}


void setup()
{
  pinMode(rev_left, OUTPUT);
  pinMode(other_led, OUTPUT);
}

void loop()
{
  flash_LED(250);
}

// Functions

void flash_LED(int delaytime){
  digitalWrite(rev_left, HIGH);
  delay(delaytime); // Wait for 1000 millisecond(s)
  digitalWrite(rev_left, LOW);
  delay(delaytime); // Wait for 1000 millisecond(s)
  digitalWrite(other_led, HIGH);
  delay(delaytime); // Wait for 1000 millisecond(s)
  digitalWrite(other_led, LOW);
  delay(delaytime); // Wait for 1000 millisecond(s)
}