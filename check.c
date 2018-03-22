#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int recurso(int n){
	if(n==-2){
		return 1;
	}
	printf("rec: %i \n",n);
	return recurso(n-1)+2;
}
int main(void) {
	int res = recurso(4);
	printf("result: %i ",res);
	return 0;
	}