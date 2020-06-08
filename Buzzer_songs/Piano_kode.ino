int knapp1 = 0;
int knapp2 = 0;
int knapp3 = 0;
int knapp4 = 0;
int knapp5 = 0;
int knapp6 = 0;
int knapp7 = 0;
int knapp8 = 0;
const int pipar = 10;
void setup() {
  // put your setup code here, to run once:
pinMode (3, INPUT);
pinMode (4, INPUT);
pinMode (5, INPUT);
pinMode (6, INPUT);
pinMode (7, INPUT);
pinMode (8, INPUT);
pinMode (11, INPUT);
pinMode (12, INPUT);
pinMode (10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
knapp1 = digitalRead(3);
knapp2 = digitalRead(4);
knapp3 = digitalRead(5);
knapp4 = digitalRead(6);
knapp5 = digitalRead(7);
knapp6 = digitalRead(8);
knapp7 = digitalRead(11);
knapp8 = digitalRead(12);

if (knapp1 == HIGH)
{
  tone(pipar, 523);      // C5
}
else
{
   if (knapp2 == HIGH)
{
  tone(pipar, 587);      // D5
}
  else
  {
if (knapp3 == HIGH)
{
  tone(pipar, 659);      //E5
}
   else
   {
if (knapp4 == HIGH)
{
  tone(pipar, 699);      //F5
}
      else
      {
if (knapp5 == HIGH)
{
  tone(pipar, 784);      //G5
}
          else
          {
if (knapp6 == HIGH)
{
  tone(pipar, 880);     //A5
}
              else
              {
                if (knapp7 == HIGH)
                {
                  tone(pipar, 988);           // B5
                }
                else
                {
                  if (knapp8 == HIGH)
                  {
                    tone(pipar, 1047);     // C6
                  }
                
              else
              {
                noTone (pipar);
              }
                }
              }
          }
      }
   }
  }
}
}
