#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	double a,b,c,D,x1,x2;
	
	printf("write your 3 coefficients of the quadratic equation \n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	
	D = b*b-4*a*c;
	x1 = (sqrt(D)-b)/2/a;
	x2 = (-sqrt(D)-b)/2/a;
	printf("the roots of equations are %lf and %lf",x1,x2);
	

	}
