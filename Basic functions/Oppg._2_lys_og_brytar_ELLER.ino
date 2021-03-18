//INPUT
const int S0 = 3;
const int S1 = 4;
const int S2 = 5;
//OUTPUT
const int X0 = 6;
const int X1 = 7;
//Verdi til kvar brytar
int posisjon0 = 0;
int posisjon1 = 0;
int posisjon2 = 0;

void setup() {
  // put your setup code here, to run once:
pinMode (S0, INPUT);
pinMode (S1, INPUT);
pinMode (S2, INPUT);
pinMode (X0, OUTPUT);
pinMode (X1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  posisjon0 = digitalRead (S0);
  posisjon1 = digitalRead (S1);
  posisjon2 = digitalRead (S2);

if (posisjon2 == HIGH)
{
  digitalWrite (X0, LOW);
  digitalWrite (X1, LOW);
}
else
{
if ((posisjon0 || posisjon1) == HIGH)
{
  digitalWrite (X0, HIGH);
  digitalWrite (X1, HIGH);
}
}

}
