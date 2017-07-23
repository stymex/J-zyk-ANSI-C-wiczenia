#include <stdio.h>

int main() {
	float fahr, celcius;
	int initial, upper, step;
	printf("Input initial value\n");
	scanf("%d",&initial);
	printf("Input upper limit\n");
	scanf("%d",&upper);
	printf("Input step\n");
	scanf("%d",&step);
	printf("Fahr Celcius\n");
	fahr=initial;
	while(fahr<=upper) {
		celcius=(5.0/9.0)*(fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr=fahr+step;
	}
	return 0;
}
