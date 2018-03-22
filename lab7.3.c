#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	double i,a,assasin ,assasinus;
	
	a = 0;
	while(a<=360)
	{
		assasin = sin(M_PI/180*a);
		assasinus = assasin * 20;
		for(i=0;i<(20+assasinus);i++){
			printf("*");
		}
		printf("\n");
		a=a+1;
	
	}
	}
