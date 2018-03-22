#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	int n,i;
	

	do {
		printf("Please enter an integer:");
		scanf("%i",&n);
		printf("The number squared is %i \n", n*n);
	} while(n>0);

	printf("Done.");
	return 0;
	}
