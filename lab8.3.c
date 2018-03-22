#include <stdio.h>
#include <math.h>

int main(void) {
	
	

	int n, i=0; 
	
	scanf ("%i", &n); 
	
	printf("%i = ", n); 
	do { 
	int a = n%16; 
	n = n/16; 
	printf("+ %i*16^%i ", a, i); 
	i++; 
	}	while (n>0); 
	return 0;
}
