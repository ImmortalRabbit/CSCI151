#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

void printBinary(int n){
	if(n==1){
		printf("%i",1);
	}else if(n==0){
		printf("%i",0);
	} else {
		printBinary(n/2);
		printf("%i", n%2);
	}
}

int main(void) {
	int decimal;
	scanf("%i",&decimal);
	printBinary(decimal);
	return 0;
}