// Cpp code
int animationSpeed = 400;

void setup()
{ animationSpeed=400; 
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(animationSpeed);
  digitalWrite(13, LOW);
  delay(animationSpeed);
  digitalWrite(12, HIGH);
  delay(animationSpeed); 
  digitalWrite(12, LOW);
  delay(animationSpeed); 
  digitalWrite(11, HIGH);
  delay(animationSpeed); 
  digitalWrite(11, LOW);
  delay(animationSpeed); 
  animationSpeed=animationSpeed-50; 
  if 
}
