#include <stdio.h>


#include <math.h>

int main(void) {
	
	double d,h,r,Sa,Ba,V;
	r = 2;
	h = 3;
	d = r*r+h*h;
	Sa = 3.14*r*sqrt(d);
	V = 3.14*r*r*h/3;
	Ba = 3.14*r*r;
	printf("The surface area is %f \n", Sa);
	printf("The area of base is %f \n", Ba);
	printf("The volume is %f \n", V); 	
	return 0;

	}
