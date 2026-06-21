const int micPin = 39;

const int led1 = 18;
const int led2 = 19;
const int led3 = 21;

void setup() {

  Serial.begin(115200);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {

  int sensorValue = analogRead(micPin);

  Serial.println(sensorValue);

  // OFF all LEDs first
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

  // Thresholds for 2000+ range

  if(sensorValue > 1500) {
    digitalWrite(led1, HIGH);
  }

  if(sensorValue > 2000) {
    digitalWrite(led2, HIGH);
  }

  if(sensorValue > 2500) {
    digitalWrite(led3, HIGH);
  }

  delay(100);
}
