#include <stdio.h>

#define NONBLANK 'a'

/*Zastępowanie ciągów spacji pojedynczymi znakami spacji*/

int main() {
	int c, lastc;
	
	lastc=NONBLANK;
	while((c=getchar())!=EOF) {
		if(c!=' ') {
			putchar(c);
		} else if(lastc!=' ') {
			putchar(c);
		}
		lastc=c;
	}
	return 0;
}
