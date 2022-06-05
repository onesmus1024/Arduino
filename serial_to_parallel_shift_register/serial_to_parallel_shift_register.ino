
int latch_pin =11;
int data_pin= 12;
int clock_pin = 9;
byte LEDS = 0b0000000;
int delay_time=250;

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
  delay(delay_time);

  LEDS=LEDS+1;
//  if(LEDS==0b11111111){
//    LEDS=0b00000000;
//  }

}
