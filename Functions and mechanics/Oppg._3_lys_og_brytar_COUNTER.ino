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

int teller1 = 0;
int teller2 = 0;

void setup() {
  // put your setup code here, to run once:
pinMode (S0, INPUT);
pinMode (S1, INPUT);
pinMode (S2, INPUT);
pinMode (X0, OUTPUT);
pinMode (X1, OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  posisjon0 = digitalRead (S0);
  posisjon1 = digitalRead (S1);
  posisjon2 = digitalRead (S2);

  Serial.println (teller1);
  Serial.println (teller2);

   // Knappar aktiverar tellaren (+1)
  if (posisjon0 == HIGH)
  {
    teller1 ++;
    delay(150);
  }

  if (posisjon1 == HIGH)
  {
    teller2 ++;
    delay(150);
  }
  // Teller aktiverar lys
  if (teller1 >= 5)
  {
    digitalWrite(X0, HIGH);
  }
  else
  {
    digitalWrite(X0, LOW);
  }

  if (teller2 >= 10)
  {
    digitalWrite(X1, HIGH);
  }
  else
  {
    digitalWrite(X1, LOW);
  }
  //Resetje teljaren
  if (posisjon2 == HIGH)
  {
    teller1 = 0;
    teller2 = 0;
  }
  
}
