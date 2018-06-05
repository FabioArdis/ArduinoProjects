//Set the leds.
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;


void setup()
{
  //Setup the leds.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  //Set leds' voltages
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
}

void loop()
{
  //Loop
  digitalWrite(led1, LOW);
  delay(400);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(200);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(200);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(200);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  delay(400);
  digitalWrite(led5, HIGH);
  digitalWrite(led4, LOW);
  delay(200);
  digitalWrite(led4, HIGH);
  digitalWrite(led3, LOW);
  delay(200);
  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
  delay(200);
  digitalWrite(led2, HIGH);
  delay(30);
}
