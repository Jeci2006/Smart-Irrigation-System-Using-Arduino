const int frontSensor = A0;
const int endSensor = A1;
const int relayPin = 7;

// Threshold values (adjust after calibration)
const int dryThreshold = 650;
const int wetThreshold = 400;

void setup()
{
  pinMode(relayPin, OUTPUT);

  // Pump OFF initially
  digitalWrite(relayPin, HIGH);

  Serial.begin(9600);

  Serial.println("Smart Irrigation System Started");
}

void loop()
{
  int frontValue = analogRead(frontSensor);
  int endValue = analogRead(endSensor);

  Serial.print("Front Sensor: ");
  Serial.println(frontValue);

  Serial.print("End Sensor: ");
  Serial.println(endValue);

  if(frontValue > dryThreshold && endValue > dryThreshold)
  {
    digitalWrite(relayPin, LOW);
    Serial.println("Motor ON");
  }
  else if(frontValue < wetThreshold && endValue < wetThreshold)
  {
    digitalWrite(relayPin, HIGH);
    Serial.println("Motor OFF");
  }
  else
  {
    Serial.println("Monitoring soil moisture...");
  }

  delay(2000);
}
