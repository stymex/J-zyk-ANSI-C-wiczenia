#include <stdio.h>
 
#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

//Wyświetlanie histogramu pionowego

int main() {
	int c, nc, state;
	int maxvalue;
	int ovflow;
	int wl[MAXWORD];
	
	state=OUT;
	nc=0;
	ovflow=0;
	
	for(int i=0; i<MAXWORD; ++i) 
		wl[i]=0;
		
	while((c=getchar())!=EOF) {
		if(c==' '||c=='\n'||c=='\t') {
			state=OUT;
			if(nc>0) {
				if(nc<MAXWORD) {
					++wl[nc];
				} else {
					++ovflow;
				}
			}
			nc=0;
		} else if (state==OUT) {
			state=IN;
			nc=1; //początek nowego słowa
		} else {
			++nc; //wewnątrz słowa
		}
	}
	
	maxvalue=0;
	for(int i=0; i<MAXWORD; ++i) {
		if(wl[i]>maxvalue) {
			maxvalue=wl[i];
		}
	}
	
	for(int i=0; i<MAXWORD; ++i) {
		for(int j=0; j<MAXWORD; ++j) {
			if(wl[j]*MAXHIST/maxvalue>=i) {
				printf(" * ");
			} else {
				printf("   ");
			}
		}
		putchar('\n');
	}
	
	for(int i=1; i<MAXWORD; ++i) {
		printf("%4d ", i);
	}
	putchar('\n');
	
	for(int i=1; i<MAXWORD; ++i) {
		printf("%4d ", wl[i]);
	}
	putchar('\n');
	
	if(ovflow>0) {
		printf("There are %d words >= %d\n", ovflow, MAXWORD);
	}
	
	return 0;
}
