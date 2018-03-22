#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	int a,b,c;
	
	
	printf("n \t 2^n \n");
	printf("_____________ \n");
	for(a=1;a<=16;a++)
	{
	 b = pow(2,a);
	 printf("%i \t %i \n",a,b);
	}
	
	}
