#include <Servo.h>    //Importerar Servo library for styring av Servoen
Servo MyServo;
int tellar = 0;       //Tellaren brukt til å lese av betjening av pulsgivaren
int Vinkel = 0;           //Variabel brukt til servostyring
const int CLK = 2;    //Variabel for Arduino pinnen kopla til CLK  (CW Rotasjon av pulsgivar)
const int Data = 3;   //Variabel for Arduino pinnen kopla til Data (CCW Rotasjon av pulsgivar)
const int SW = 4;     //Variabel for Arduino pinnen kopla til SW
int PosisjonData = 0; //Variabel for å lesa av input frå Data pinnen
int PosisjonCLK = 0;  //Variabel for å lesa av input frå CLK pinnen
int SisteposCLK;      //Variabel for å lesa av siste posisjon til CLK
void setup() {
  // put your setup code here, to run once:
MyServo.attach(9);      //Utgong til Servo pin 9
pinMode (Data, INPUT);  //Pulsgivar Data pin 3
pinMode (CLK, INPUT);   //Pulsgivar CLK pin 2
pinMode (SW, INPUT);    //Pulsgivar SW pin 4
Serial.begin(9600);     //Monitor for funksjonsprøvinga
SisteposCLK = digitalRead(CLK);
}

void loop() {
  // put your main code here, to run repeatedly:
  
//Koden under leser av og bearbeidar signal frå Rotasjonspulsgivaren, og legg den inn i Serial monitoren
PosisjonCLK = digitalRead(CLK);     //Variabelen som skal lesa av CLK frå pulsgivar
PosisjonData = digitalRead(Data);   //Variabelen som skal lesa av Data frå pulsgivar

if (PosisjonCLK != SisteposCLK && PosisjonCLK ==1) {
  if (PosisjonData != PosisjonCLK) {
    tellar --;  //Pulsgivar rotert CCW
  }
  else {
    tellar ++; //Pulsgivar rotert CW
  }
  Serial.print("Vinkel: ");   //Her printar vi verdiane i serial monitoren for å få oversikt over verdiar ved funksjonstest.
  Serial.print(tellar * 10);  //Visar vinkelen til servo
  Serial.print(", Tellar: ");
  Serial.println(tellar);
}
SisteposCLK = PosisjonCLK;
delay(1);
//Koden under her overfører data frå Tellar til utgang for Servoen
Vinkel = tellar * 10; //Her kan ein forandre multiplikatoren til høgare verdi for aukt sensitivitet, eller lavare for minska sensitivitet.
MyServo.write(Vinkel);
}
