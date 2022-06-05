

int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int waitTime = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  delay(waitTime);
   digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  delay(waitTime);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  delay(waitTime);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  delay(waitTime);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  delay(waitTime);
    digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  delay(waitTime);
    digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  delay(waitTime);
    digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  delay(waitTime);
    digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  delay(waitTime);
    digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  delay(waitTime);
    digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  delay(waitTime);
    digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,LOW);
  delay(waitTime);
    digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  delay(waitTime);
    digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  delay(waitTime);
    digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,HIGH);
  delay(2000);

}
