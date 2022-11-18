#include <Servo.h>
Servo myservo;
int servo_pin=3;
const int frontEchoPin = 7;
const int frontTriggerPin = 6;
const int leftEchoPin = 11;
const int leftTriggerPin = 10;
const int rightEchoPin = 9;
const int rightTriggerPin = 8;
const int motorL1 = 2;
const int motorL2 = 3;
const int motorR1 = 4;
const int motorR2 = 5;
volatile float maxFrontDistance = 30.00;
volatile float frontDuration, frontDistanceCm, leftDuration, leftDistanceCm, rightDuration, rightDistanceCm;
volatile float maxLeftDistance = 20.00, maxRightDistance = 20.00;
void setup()
{
  Serial.begin(9600);
  //For Ultrasonic Sensors 
  pinMode(frontTriggerPin, OUTPUT);
  pinMode(frontEchoPin, INPUT);
  pinMode(leftTriggerPin, OUTPUT);
  pinMode(leftEchoPin, INPUT);
  pinMode(rightTriggerPin, OUTPUT);
  pinMode(rightEchoPin, INPUT);
  //For Motors
  pinMode(motorL1, OUTPUT);
  pinMode(motorL2, OUTPUT);
  pinMode(motorR1, OUTPUT);
  pinMode(motorR2, OUTPUT);
  //For Servo Motor
  myservo.attach(servo_pin);
}
void loop()
  {
  //To Check Front Distance
  checkFrontDistance();
  if (frontDistanceCm < maxFrontDistance)
     {
      Serial.println("Too close");
      checkLeftDistance();
      delay(20);
      checkRightDistance();
      delay(20);
      if (leftDistanceCm < rightDistanceCm)
       moveRight();
      else if (leftDistanceCm > rightDistanceCm) {
       moveLeft();
     }
   }
  else 
     {
      Serial.println("OK");
       moveForward();
     }
  //To Check Left Distance
  checkLeftDistance();
  if (leftDistanceCm < maxLeftDistance)
     {
      Serial.println("Left too close");
      delay(20);
      checkLeftDistance();
      delay(20);
      checkRightDistance();
      delay(20);
      if (leftDistanceCm > rightDistanceCm)
        moveForward();
      else if (leftDistanceCm < rightDistanceCm) {
        moveRight();
     }
    }
  //To Check Right Distance
  checkRightDistance();
  if (rightDistanceCm < maxRightDistance) {
    Serial.println("Right too close");
    delay(20);
    checkRightDistance();
    delay(20);
    checkLeftDistance();
    delay(20);
    if (rightDistanceCm > leftDistanceCm)
      moveForward();
    else if (rightDistanceCm < leftDistanceCm) {
      moveLeft();
    }
  }
}

void checkFrontDistance()
{ 
  int pos = 0; // variable to store the servo position
  int dtwait=15; // duration of wait at the end of each step
  for(pos = 0; pos < 180; pos += 1)
  {
   myservo.write(pos); // Move to position in variable 'pos'
   delay(dtwait); // wait dtwait for the servo to reach the position
  }
  for(pos = 180; pos>=1; pos -= 1)
  {
   myservo.write(pos); // Move to position in variable 'pos'
   delay(dtwait); // wait dtwait for the servo to reach the position
  }
  digitalWrite(frontTriggerPin, LOW);  
  delayMicroseconds(4);
  digitalWrite(frontTriggerPin, HIGH);  
  delayMicroseconds(10);
  digitalWrite(frontTriggerPin, LOW);
  frontDuration = pulseIn(frontEchoPin, HIGH);  
  frontDistanceCm = frontDuration * 10 / 292 / 2;  
  Serial.print("Distance: ");
  Serial.print(frontDistanceCm);
  Serial.println(" cm");
}
void checkLeftDistance()
{
  digitalWrite(leftTriggerPin, LOW);  
  delayMicroseconds(4);
  digitalWrite(leftTriggerPin, HIGH);  
  delayMicroseconds(10);
  digitalWrite(leftTriggerPin, LOW);
  leftDuration = pulseIn(leftEchoPin, HIGH);  
  leftDistanceCm = leftDuration * 10 / 292 / 2;  
  Serial.print("Left distance: ");
  Serial.print(leftDistanceCm);
  Serial.println(" cm");
}
void checkRightDistance()
{
  digitalWrite(rightTriggerPin, LOW);  
  delayMicroseconds(4);
  digitalWrite(rightTriggerPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(rightTriggerPin, LOW);
  rightDuration = pulseIn(rightEchoPin, HIGH);  
  rightDistanceCm = rightDuration * 10 / 292 / 2;  
  Serial.print("Right distance: ");
  Serial.print(rightDistanceCm);
  Serial.println(" cm");
}
void moveBackward()
{
  Serial.println("Backward");
  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
  digitalWrite(motorR1, HIGH);
  digitalWrite(motorR2, LOW);
}
void moveForward()
{
  Serial.println("Forward");
  digitalWrite(motorL1, LOW);
  digitalWrite(motorL2, HIGH);
  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, HIGH);
}
void moveLeft()
{
  Serial.println("Left");
  digitalWrite(motorL1, LOW);
  digitalWrite(motorL2, HIGH);
  digitalWrite(motorR1, HIGH);
  digitalWrite(motorR2, LOW);
}
void moveRight()
{
  Serial.println("Right");
  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, HIGH);
}
