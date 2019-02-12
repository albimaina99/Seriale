int buttonpin = 7;
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonpin, INPUT);
  }

  void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(buttonpin);
  if (state == HIGH) {
    counter ++;
    Serial.println(counter);
  }
  delay(1);
}
