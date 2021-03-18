const int pipar = 9;
const int C = 262;
const int D = 294;
const int E = 329;
const int F = 349;
const int G = 392;
const int A = 440;
const int H = 494;
const int C2 = 523;
const int D2 = 587;
void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tone (pipar, G);
delay(600);
tone (pipar, A);
delay(250);
tone (pipar, G);
delay(500);
tone (pipar, E);
delay(1100);

tone (pipar, G);
delay(600);
tone (pipar, A);
delay(250);
tone (pipar, G);
delay(500);
tone (pipar, E);
delay(1100);

tone (pipar, D2);
delay(1000);
noTone (pipar);
delay(50);
tone (pipar, D2);
delay(500);

tone (pipar, H);
delay(1000);
noTone(pipar);
delay(50);
tone (pipar, H);
delay(500);

tone(pipar, C2);
delay(1000);
noTone (pipar);
delay(50);
tone(pipar, C2);
delay(500);

tone(pipar, G);
delay(1100);

noTone(pipar);
delay(20000);
}
