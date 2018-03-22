#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	int n,k,a;
	setvbuf(stdout, NULL, _IONBF, 0);
	scanf("%i",&n);
	k = 0;
	a = 1;
	while (n>=a)
	{	
		a = a * 2;
		k++;
				
	}
	printf("%i",k-1);	
	return 0;
	}
