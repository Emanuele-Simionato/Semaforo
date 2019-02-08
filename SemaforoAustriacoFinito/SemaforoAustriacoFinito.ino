String s;
int lampeggi = 0;
int tempoRosso = 0;
int tempoLampeggio = 0;
void Fermi(void)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}
void Fermi1(void)
{
  digitalWrite(7,HIGH);
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
  digitalWrite(7,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}
void lampeggiante1(void)
{
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  for(int i = 0; i<4;i++)
  {
    digitalWrite(7,LOW);
    delay(1000);
    digitalWrite(7,HIGH);
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
  digitalWrite(7,LOW);
}

void setup() {
  // put your setup code here, to run once:
pinMode(7,OUTPUT);//V1
pinMode(2,OUTPUT);//G1
pinMode(3,OUTPUT);//R1
pinMode(4,OUTPUT);//V2
pinMode(5,OUTPUT);//G2
pinMode(6,OUTPUT);//R2
Serial.begin(9600); //opens a serial port, sets data rate to 9600
Serial.println("seriale attivata");
}

//chiedere all'ultente il delay all'utenete comandi Serial.availabele, Serial.readString(), Seria.print, valore.
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("INSERISCI IL TEMPO DI ATTESA DEL ROSSO");
while(Serial.available() == 0){
  Serial.println("BANANA"}
if(Serial.available() > 0){
  s = Serial.readString();
  Serial.print("HAI INSERITO: ");
  Serial.println(s.toInt());
  s = tempoRosso;
}

Fermi();
delay(tempoRosso);
lampeggiante();
giallo();
delay(4000);
Fermi1();
delay(tempoRosso);
lampeggiante1();
giallo1();
delay(4000);

}
