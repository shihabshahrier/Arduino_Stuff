#define TRIGGER_PIN  3
#define ECHO_PIN     2

void setup() {
  Serial.begin(9600);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  long duration;
  float distanceM;

  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);

  distanceM = (duration * 0.000343) / 2;

  Serial.print("Distance: ");
  Serial.print(distanceM);
  Serial.println(" meters");

  delay(1000);
}
