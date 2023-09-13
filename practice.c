#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)

int main(void) {

float fahrenheit, celsius;

printf ("Enter Pahrenheit temperature: ");
scanf ( "%f", &fahrenheit);

celsius= (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

printf("Celsius equivalent: %.1f\n", celsius);

return 0;
}
