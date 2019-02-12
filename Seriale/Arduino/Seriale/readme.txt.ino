void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x = 0; x < 100; x++)
  {
    Serial.println(x);
  }
  delay(10);
}
