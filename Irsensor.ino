//{in Define}
int IrSensor = 7;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  // Pin Mode Define
  pinMode(IrSensor,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Save value in variable
  int Sensor_Value = digitalRead(IrSensor);
  // 2 sec delay
  delay(2000);
  // print sensor values
  //print sensor values (Serial.println) use for print value next line
  Serial.print(Sensor_Value);
}


