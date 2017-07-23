#include <stdio.h>

float celsius (float fahr);

int main(int argc, char const *argv[])
{
	float fahr;
	int lower, upper, step;

	lower = 0;
	upper = 400;
	step = 20;

	fahr = lower;
	while(fahr <= upper) {
		printf("%3.0f %6.0f\n", fahr, celsius(fahr));
		fahr = fahr + step;
	}
	return 0;
}

float celsius(float fahr) {
	return (5.0/9.0) * (fahr - 32.0);
}