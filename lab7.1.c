#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	int a,b,c,i;
	a = 0;
	b = 1;
	i = 0;
	printf("%i \n%i \n",a,b);
	while (i<9)
	{
		a = a + b;
		printf("%i \n",a);
		b = b + a;
		printf("%i \n",b);
		i++;					
	}

	}
