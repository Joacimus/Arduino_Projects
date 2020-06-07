const int pipar = 9;
const int C = 523;
const int D = 587;
const int E = 659;
const int F = 698;
const int G = 784;
const int A = 880;
const int H = 988;

int posisjonknapp = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
posisjonknapp = digitalRead(4);

if (posisjonknapp == HIGH)
  {
tone (pipar, G);
delay(600);
tone (pipar, F);
delay(350);
tone (pipar, E);
delay(500);
tone (pipar, D);
delay(500);

tone (pipar, C);
delay(500);
tone (pipar, D);
delay(500);
tone (pipar, E);
delay(500);
tone (pipar, F);
delay(500);

tone (pipar, G);
delay(600);
tone(pipar, A);
delay(350);
tone(pipar, G);
delay(500);
tone(pipar, F);
delay(500);

tone(pipar, E);
delay(1200);
//5. takt
noTone(pipar);
delay(500);
tone(pipar, A);
delay(600);
tone(pipar, G);
delay(350);
tone(pipar, F);
delay(500);
tone(pipar, E);
delay(500);

tone(pipar, D);
delay(500);
tone(pipar, E);
delay(500);
tone(pipar, F);
delay(500);
tone(pipar, G);
delay(500);

tone(pipar, G);
delay(600);
tone(pipar, A);
delay(350);
tone(pipar, A);
delay(500);
tone(pipar, H);
delay(500);

tone(pipar, 1047);
delay(1000);
//9. takt

  }
  else
  {
    noTone(pipar);
  }
}
