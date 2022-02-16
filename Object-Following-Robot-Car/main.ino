/*© 2022. arindamdas13. All Rights Reserved*/
#define LS 2 // left sensor
#define RS 3 // right sensor
#define LM1 5 // left motor M1a
#define LM2 4 // left motor M2a
#define RM1 7 // right motor M2a
#define RM2 6 // right motor M2b
void setup()
{
  Serial.begin(9600);
pinMode(LS, INPUT);
pinMode(RS, INPUT);
pinMode(LM1, OUTPUT);
pinMode(LM2, OUTPUT);
pinMode(RM1, OUTPUT);
pinMode(RM2, OUTPUT);
}
void loop()
{
int Right = digitalRead(LS);
int Left = digitalRead(RS);
if((Right==0)&&(Left==0) ) //Forward
{
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}
if((Right==1)&&(Left==0)) //Left
{
digitalWrite(LM1, LOW);
digitalWrite(LM2, LOW);
digitalWrite(RM1, HIGH);
digitalWrite(RM2, LOW);
}
if((Right==0)&&(Left==1)) //Right
{
digitalWrite(LM1, HIGH);
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2, LOW);
}

if((Right==1)&&(Left==1)) //Stop
{
digitalWrite(LM1, LOW);
digitalWrite(LM2, LOW);
digitalWrite(RM1, LOW);
digitalWrite(RM2, LOW);
}
}
