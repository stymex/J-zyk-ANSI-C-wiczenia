#include <stdio.h>

int main() {
	//printf("%d",EOF);
	int c;
	while((c=getchar())!=EOF) {
		if((c=!' ')) {
			printf("%c", c+1);
		} else {
			printf(" ");
		}
	}
	printf("%d - at EOF\n", c);
	return 0;
}
