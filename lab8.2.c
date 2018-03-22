#include <stdio.h>


#include <math.h>

	
int main(void) { 
	int n, i, a;
	i = 0; 
	scanf ("%i", &n); 

	do { 
	a = n%8; 
	n = n/8; 
	printf("	+ %i*8^%i ", a, i); 
	i++; 
	} while (n > 0); 
	
	return 0; 
}