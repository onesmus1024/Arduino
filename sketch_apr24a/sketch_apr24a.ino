
int pinA1 = A1;
int pinLed=10;
float volts;
int readVal;



void setup() {
  // put your setup code here, to run once:

  pinMode(pinA1,INPUT);
  pinMode(pinLed,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  readVal=analogRead(pinA1);
  volts = (5./1023.)*readVal;
  Serial.println(volts);
  delay(1000);

  if(volts>4.0){
    digitalWrite(pinLed,HIGH);
  }
  if(volts<4.0){
    digitalWrite(pinLed,LOW);
  }

}
