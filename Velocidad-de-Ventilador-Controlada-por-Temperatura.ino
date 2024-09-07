int sensorPin = A0;
int PWM = 3;
int sensorVal;
int PWMVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  pinMode(PWM, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorVal = analogRead(sensorPin);
  if (sensorVal > 800) {
    sensorVal = 800;
  }
  Serial.println(sensorVal);
  delay(1000);

  PWMVal = map(sensorVal, 540, 800, 26, 255);

  if(sensorVal < 540) {
    PWMVal = 0;
  }

  analogWrite(PWM, PWMVal);
}

//540 limite inferior. Se puede modificar
//800 limite superior. Se puede modificar
