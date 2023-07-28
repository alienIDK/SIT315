
// C++ code
//
int LED_pin = 9; // initialize LED pin 
int motion_pin = 10; // initialize motion sensor pin 
 
void setup()
{
  pinMode(LED_pin, OUTPUT); // Set LED as output
  pinMode (motion_pin, INPUT); // Set motion sensor as input
  digitalWrite(LED_pin, LOW); // Ensure LED is off 
  Serial.begin(9600); // initialize serial
  
}

void loop()
{
  int state = digitalRead(motion_pin); // Read motion sensor state
  if (state == HIGH) // If motion detected 
  {
    digitalWrite(LED_pin, HIGH); // turn on LED
    Serial.println("Motion: Detected, LED: On");
  }
  else // if motion NOT detected 
  {
    digitalWrite(LED_pin, LOW); // turn off LED
    Serial.println("Motion: NOT-Detected, LED: Off");
  }
  delay(1000); // Pause for a second
    
    
}
