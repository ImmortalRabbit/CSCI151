#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* 
 Write a function, expApprox(double x, int n), 
 which approximates the exponential function by calculating 
 the first n terms of its Taylor series expansion about 0:
expexp
*/

void sinApprox(double x, int n){
	double result = 0,i;
	for (int i = 1; i < (n+1); i+=2)
	{
		double factor = 1;
		for (int j = 0; j < (i+1); ++j)
		{
			if(j!=0){
				factor = factor * (double)j;
			}
			
		}
	
		result = result + pow(x,i)/factor;
	}
	printf("%lf\n",result);
}	
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	double x,y;
	int n;
	printf("Write power of e\n");
	scanf("%lf",&x);
	printf("Choose n\n");
	scanf("%i",&n);

	sinApprox(x,n);
	return 0;
}