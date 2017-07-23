#include <stdio.h>
// this time we're going down
int main() {
	float fahr, celcius;
	int initial, lower, step;
	printf("Input initial value\n");
	scanf("%d",&initial);
	printf("Input lower limit\n");
	scanf("%d",&lower);
	printf("Input step\n");
	scanf("%d",&step);
	printf("Celcius Fahr\n");
	celcius=initial;
	while(celcius>=lower) {
		fahr=(9.0*celcius)/5.0+32.0;
		printf("%3.0f %6.1f\n", celcius, fahr);
		celcius=celcius-step;
	}
	return 0;
}
