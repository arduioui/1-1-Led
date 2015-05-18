int light_1_green = 2;
int light_1_orange = 3;
int light_1_red = 4;

int light_2_green = 5;
int light_2_orange = 6;
int light_2_red = 7;

int time_green = 5000;
int time_orange = 1000;
int time_red = 1000;


void setup() {
  // setup code here, to run once:
  pinMode(light_1_green, OUTPUT);
  pinMode(light_1_orange, OUTPUT);
  pinMode(light_1_red, OUTPUT);
  
  pinMode(light_2_green, OUTPUT);
  pinMode(light_2_orange, OUTPUT);
  pinMode(light_2_red, OUTPUT);
}


void loop() {
  // main code here, to run repeatedly:
  digitalWrite(light_2_red, HIGH);
  digitalWrite(light_1_green, HIGH);
  delay(time_green);
  
  digitalWrite(light_1_green, LOW);
  digitalWrite(light_1_orange, HIGH);
  delay(time_orange);
  
  digitalWrite(light_1_orange, LOW);
  digitalWrite(light_1_red, HIGH);
  // secure time
  delay(time_red);
  
  digitalWrite(light_2_red, LOW);
  digitalWrite(light_2_green, HIGH);
  delay(time_green);
  
  digitalWrite(light_2_green, LOW);
  digitalWrite(light_2_orange, HIGH);
  delay(time_orange);
  
  digitalWrite(light_2_orange, LOW);
  digitalWrite(light_2_red, HIGH);
  // secure time
  delay(time_red);
  
  digitalWrite(light_1_red, LOW);
}
