/*
  Billy_Bass
Test code to interface an msp430 to the billy bass
 
 This example code is in the public domain.
 */
const int body =  P2_2;
const int mouth =  P2_1;
const int tail =  P2_0;

int timer = 5000;

void setup() {
  Serial.begin(9600);
  pinMode(body, OUTPUT); 
  pinMode(mouth, OUTPUT); 
  pinMode(tail, OUTPUT); 
}

void loop() {
  int button = analogRead(A5);
  int cds = analogRead(A4);
  
  
  
  if (button > 300)
    digitalWrite(body, HIGH);
  else
    digitalWrite(body, LOW);
  
  if (cds > 700)
    digitalWrite(tail, HIGH);
  else
    digitalWrite(tail, LOW);



  if (timer < 1)
    timer = 5000;
    
  if (timer < 2500)
    digitalWrite(mouth, HIGH);
    
  if (timer > 2500)
    digitalWrite(mouth, LOW);
    
  timer--;
}
