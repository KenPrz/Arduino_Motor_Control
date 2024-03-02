// Define motor pin connections
int motor1pin1 = 2; // Pin connected to motor 1 positive terminal
int motor1pin2 = 3; // Pin connected to motor 1 negative terminal

int motor2pin1 = 4; // Pin connected to motor 2 positive terminal
int motor2pin2 = 5; // Pin connected to motor 2 negative terminal

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);
  
  // Set motor pins as outputs
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
}

void loop() {
  // Print message to serial monitor
  Serial.println("Moving motors forward");
  
  // Move motors forward
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  delay(1000);
  
  // Print message to serial monitor
  Serial.println("Moving motors backward");
  
  // Move motors backward
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  delay(1000);
}
