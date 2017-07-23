#include <stdio.h>

int main() {
	//printf("%d",EOF);
	int c;
	while((c=getchar())!=EOF) {
		if(c!=10) printf("%c ", c+1);
	}
	printf("%d - at EOF\n", c);
	return 0;
}
