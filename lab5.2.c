#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	double sin,x;
	scanf("%lf",&x);
	x = x * (M_PI/180);
	sin = x - pow(x,3)/(1*2*3)+pow(x,5)/(1*2*3*4*5);

	printf("Taylor series %lf",sin);
	

	}
