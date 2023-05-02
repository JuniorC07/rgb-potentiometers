int redPin = 11, greenPin = 9, bluePin = 10;

int redIn = A2, greenIn = A1, blueIn = A0;

int redVal = 0, greenVal = 0, blueVal = 0;

int redOut = 0, greenOut = 0, blueOut = 0;


void setup()
{
  pinMode(redIn, INPUT);
  pinMode(greenIn, INPUT);
  pinMode(blueIn, INPUT);
  
  pinMode(redOut, OUTPUT);
  pinMode(greenOut, OUTPUT);
  pinMode(blueOut, OUTPUT);
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  redVal = analogRead(redIn);
  redOut = map(redVal, 0, 1023, 0, 255);
  
  greenVal = analogRead(greenIn);
  greenOut = map(greenVal, 0, 1023, 0, 255);
  
  blueVal = analogRead(blueIn);
  blueOut = map(blueVal, 0, 1023, 0, 255);
  
  analogWrite(redPin, redOut );
  analogWrite(bluePin, blueOut);
  analogWrite(greenPin, greenOut);
  
  Serial.print("Red = ");
  Serial.println(redOut);
    
  Serial.print("Green = ");
  Serial.println(greenOut);

  Serial.print("Blue = ");
  Serial.println(blueOut);
  
  delay(2000);
}