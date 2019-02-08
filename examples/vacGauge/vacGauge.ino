#include <vacGauge.h>

vacGauge PG500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  PG500.setGauge(A0);
}

void loop() {
  Serial.print("真空度：");
  Serial.print(PG500.read());
  Serial.println("Pa");
  delay(200);
}
