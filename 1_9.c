#include <stdio.h>

int main() {
	int c, num_break=0, num_tab=0, num_lin=0;
	
	while((c=getchar())!=EOF) {
		switch(c) {
			case ' ':
				num_break++;
				break;
			case '\t':
				num_tab++;
				break;
			case '\n':
				num_lin++;
				break;
		}
	}
	
	printf("Breaks:%d\n Tabs:%d\n Lines:%d\n", num_break, num_tab, num_lin);
	
	return 0;
}
