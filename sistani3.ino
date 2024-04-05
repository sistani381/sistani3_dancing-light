void setup() {
for(int i=1 ; i<9; i++){
  pinMode(i,OUTPUT);// sets the digital pin i as output
}

}

void loop() { 
  for( int i=1 ; i<9 ; i++){
    digitalWrite(i,HIGH);// sets the digital pin i on
    delay(500);// waits for 500 ms
    digitalWrite(i,LOW);// sets the digital pin i off
    delay(500);// waits for 500 ms                                                                                                           
  }
  

}
