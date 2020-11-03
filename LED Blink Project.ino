

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for 100 MS 
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for 100 MS
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(100);  
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for 100 MS
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for 100 MS
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite( 7, HIGH);  // Turn the LED on by makeing the voltage high
  delay(3000);             // wait for 3 seconds 
  
}
