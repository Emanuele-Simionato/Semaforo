int cicliSemaforo;
int tempoRosso;
int tempoGiallo;
int tempoVerde;
int numeroLampeggi;
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
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  for(int i = 0; i<numeroLampeggi;i++)
  {
    digitalWrite(4,LOW);
    delay(tempoVerde/numeroLampeggi);
    digitalWrite(4,HIGH);
    delay(tempoVerde/numeroLampeggi);   
  }
  digitalWrite(7,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}
void lampeggiante1(void)
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  for(int i = 0; i<numeroLampeggi;i++)
  {
    digitalWrite(7,LOW);
    delay(tempoVerde/numeroLampeggi);
    digitalWrite(7,HIGH);
    delay(tempoVerde/numeroLampeggi);   
  }
  
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  
}
void giallo(void){
  digitalWrite(5,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(4,LOW);
}
void giallo1(void){
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
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
Serial.println("Inserisci quante volte vuoi che il ciclo del semaforo venga eseguito");
while(Serial.available()==0){}
cicliSemaforo = Serial.readString().toInt();
if(cicliSemaforo <= 0){ 
  Serial.println("Impossibile inserire valori negativi");
  setup();
  }
Serial.println("Hai inserito:");
Serial.println(cicliSemaforo);
Serial.println("Inserisci la durata del colore rosso(IN MILLISECONDI!)");
while(Serial.available()==0){}
tempoRosso = Serial.readString().toInt();
if(tempoRosso <= 0){
  Serial.println("Impossibile inserire valori negativi");
  setup();
  }
Serial.println("Hai inserito");
Serial.println(tempoRosso);
tempoVerde = tempoRosso;
Serial.println("Inserisci la durata del colore giallo(IN MILLISECONDI!)");
while(Serial.available()==0){}
tempoGiallo = Serial.readString().toInt();
if(tempoGiallo <= 0){
  Serial.println("Impossibile inserire valori negativi");
  setup();
  }
Serial.println("Hai inserito");
Serial.println(tempoGiallo);
Serial.println("La durata del verde è:(IN MILLISECONDI)");
Serial.println(tempoVerde);
Serial.println("Inserisci quante volte vuoi che il verde lampeggi");
while(Serial.available()==0){}
numeroLampeggi = Serial.readString().toInt();
if(numeroLampeggi <= 0){
  Serial.println("Impossibile inserire valori negativi");
  setup();
  }
  else
  {
    Serial.println("Hai inserito");
    Serial.println(numeroLampeggi);
  }

}

//chiedere all'ultente il delay all'utenete comandi Serial.available, Serial.readString(), Seria.print, valore.
void loop() {
  // put your main code here, to run repeatedly:
for(int k = 0; k < cicliSemaforo; k++){
  Fermi();
delay(tempoRosso);
lampeggiante();
giallo();
delay(tempoGiallo);
Fermi1();
delay(tempoRosso);
lampeggiante1();
giallo1();
delay(tempoGiallo);
  }

setup();
}
