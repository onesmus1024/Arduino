int latch_pin =11;
int data_pin= 12;
int clock_pin = 9;
byte LEDS = 0xFF;

void setup() {
  // put your setup code here, to run once:
  pinMode(latch_pin,OUTPUT);
  pinMode(data_pin,OUTPUT);
  pinMode(clock_pin,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latch_pin,LOW);
  shiftOut(data_pin,clock_pin,LSBFIRST,LEDS);
  digitalWrite(latch_pin,HIGH);

}
