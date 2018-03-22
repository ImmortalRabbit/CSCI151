#include <stdio.h>


#include <math.h>

int main(void) {
	

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Converter from octal values to decimal \n");
	int x;
	scanf("%o", &x);
	printf("%d \n", x);

	printf("Converter from decimal values to octol \n");
	scanf("%d", &x);
	printf("%o \n", x);

	printf("Converter from hexadecimal values to decimal \n");
	scanf("%x", &x);
	printf("%d \n", x);

	printf("Converter from decimal values to hexadecimal \n");
	scanf("%d", &x);
	printf("%x \n", x);	
	return 0;

	}
