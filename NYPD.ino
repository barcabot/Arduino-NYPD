/*this program does the common lighting effect of the nypd siren bulbs 
 *the bulbs are connectd to the pins 9 and pin 12 of the ARDUINO
 * if programmed and run along woth the NYPD siren from another source it gives the complete effect
 */
int pin1 = 9;
int pin2 = 12;

void setup() {
 
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}


void loop() 
{
  for(int i=0;i++;)
  {
  digitalWrite(pin1, HIGH);   
  delay(i);
  delay(10);                       
  digitalWrite(pin1, LOW);   
  delay(i+1); 
  delay(10); 
  digitalWrite(pin2 ,HIGH);
  delay(i); 
  delay(10);
  digitalWrite(pin2, LOW);    
  delay(i+1); 
  delay(10); 
  
  }  
}
