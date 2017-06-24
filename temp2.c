#include "stdio.h"

int main()
{
	float fahr, cel;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	cel = lower;
	printf("Celsius to Fahrenheit\n");
	while (cel <= upper) {
		fahr = (cel * (9.0/5.0)) + 32;
		printf("%3.0f %6.1f\n", cel, fahr);
		cel = cel + step;
	}
}