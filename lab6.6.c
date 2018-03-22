#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	int n,i,power;
	double x,sum;
	scanf("%i",&n);
	scanf("%lf",&x);
	power = 1;
	for(i=1;i<=n;i++)
	{
		power = x * power;
		sum = power + sum;	
	}
	printf("%lf",sum);
	}
