String serialData;

void setup() {

Serial.begin(9600); // opens serial port, sets data rate to 9600 bps

}

void loop() {
  
  Serial.println("");
  while(Serial.available()) {
    
    serialData= Serial.readString();// read the incoming data as string
      Serial.println("");
      
      if (serialData[0] == 'h'&& serialData[1] =='a'){
        Serial.println("handshake successful"); 
      }    
  }
delay(25);
}
