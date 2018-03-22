#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	int i,a,b,b1,a1;
	a = 5;
	b = 0;
	for (i=0; i<=5; i++) {

		for(a1=a;a1>=1;a1--) {
		    printf("+");
		}
		for(b1=0;b1<b;b1++)  {
		    printf("*");
		}
		printf("\n");
		a--;
		b++;
	  }
	}
