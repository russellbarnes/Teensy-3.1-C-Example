#include "mk20dx128.h"
#include "core_pins.h"

int main(void)
{
pinMode(LED_BUILTIN, OUTPUT);
for (;;) {
	digitalWriteFast(LED_BUILTIN, HIGH);
	delay(30);
	digitalWriteFast(LED_BUILTIN, LOW);
	delay(30);
	digitalWriteFast(LED_BUILTIN, HIGH);
	delay(500);
	digitalWriteFast(LED_BUILTIN, LOW);
	delay(30);
}

return 0;
}

