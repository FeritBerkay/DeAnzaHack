int opt;

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  Serial.println("Choose one option:");
  Serial.println("1- Password in morse");
  Serial.println("2- Guess password");
  Serial.println("3- Create password for a new account");
  
  while (!Serial.available()) {
    // Wait for user input
  }
  
  opt = Serial.parseInt(); // Read user input as an integer
  
  if (opt == 1) {
    opt1();
  } else if (opt == 2) {
    opt2();
  } else if (opt == 3) {
    opt3();
  }
}

void opt1() {
  // Your implementation for option 1
}

void opt2() {
  // Your implementation for option 2
}

void opt3() {
  // Your implementation for option 3
}
