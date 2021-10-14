int gomb=7;
void setup() {  
  Serial.begin(9600);
  pinMode(7, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(7)==0);
  {
    Serial.println("Megnyomtak ! Üdv, a Gomb)";
  }
  
}
