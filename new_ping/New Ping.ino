#include <NewPing.h>
int x;
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
NewPing myHC_SR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup()
{
	Serial.begin(9600);
	pinMode(6, OUTPUT);
}

void loop()
{
	Serial.println(myHC_SR04.ping_cm());
	delay(50);
	x = myHC_SR04.ping_cm();
	analogWrite(6, x);
}
