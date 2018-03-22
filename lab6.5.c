#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	int n,i;
	double x,result;
	result = 1;
	scanf("%lf",&x);
	n = 2;
	for(i=0;i<n;i++)
	{
		result = x*result;	
	}
	printf("%lf",result);
	}
