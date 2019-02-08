void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("Dimmmi come ti chiami");
while(Serial.available()==0){}//il while ed il readstring dovono essere sempre utilizzati assieme altrimenti il ciclo entra in un loop
String nome = Serial.readString();
Serial.println(nome);
Serial.println("INPUT ESEGUITO");
Serial.println("Quanti anni hai?");
while(Serial.available()==0){}
int anni = Serial.readString().toInt();
Serial.println(anni/2);
//non inizializzare le variabili quando le dichiari
//ricomincia il prigramma
setup();

}
//i metodi non devono avere riferimenti a variabili globali
