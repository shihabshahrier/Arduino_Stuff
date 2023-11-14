#define IR_SENSOR_PIN 13 

int white_led = 2;
int red_led = 3;
int blue_led = 4;
int green_led = 5;
int yellow_led = 6;
int total_lights = 5;
int *lights;

void setup() {
  // put your setup code here, to run once:
  int total_lights = 5;  
  lights = new int[total_lights];
  lights[0] = white_led;
  lights[1] = red_led;
  lights[2] = blue_led;
  lights[3] = green_led;
  lights[4] = yellow_led;

  pinMode(white_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(green_led , OUTPUT);
  pinMode(yellow_led , OUTPUT);
  pinMode(IR_SENSOR_PIN, INPUT); // Set the IR sensor pin as an input
  Serial.begin(9600); 


}

int iter = 0;
void loop() {
  // put your main code here, to run repeatedly:
  if (iter >= total_lights){
    iter = 0;
  }
  int sensorValue = digitalRead(IR_SENSOR_PIN);
  if (sensorValue == LOW){
    digitalWrite(lights[iter], HIGH);
    delay(1000);
    digitalWrite(lights[iter], LOW);
    delay(1000);
    iter+=1;
  }
  


}
