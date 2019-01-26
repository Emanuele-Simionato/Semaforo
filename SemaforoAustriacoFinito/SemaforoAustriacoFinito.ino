void Fermi(void)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}
void Fermi1(void)
{
  digitalWrite(1,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);  
}
void lampeggiante(void)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  for(int i = 0; i<4;i++)
  {
    digitalWrite(4,LOW);
    delay(1000);
    digitalWrite(4,HIGH);
    delay(1000);   
  }
  digitalWrite(1,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}
void lampeggiante1(void)
{
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  for(int i = 0; i<4;i++)
  {
    digitalWrite(1,LOW);
    delay(1000);
    digitalWrite(1,HIGH);
    delay(1000);   
  }
  
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  
}
void giallo(void){
  digitalWrite(5,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
}
void giallo1(void){
  digitalWrite(2,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(1,LOW);
}

void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);//V1
pinMode(2,OUTPUT);//G1
pinMode(3,OUTPUT);//R1
pinMode(4,OUTPUT);//V2
pinMode(5,OUTPUT);//G2
pinMode(6,OUTPUT);//R2
}


void loop() {
  // put your main code here, to run repeatedly:
Fermi();
delay(5000);
lampeggiante();
giallo();
delay(4000);
Fermi1();
delay(5000);
lampeggiante1();
giallo1();
delay(4000);



}
