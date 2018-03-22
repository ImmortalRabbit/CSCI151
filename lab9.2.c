#include <stdio.h>
#include <math.h>

int main(void) {
	
	

	setvbuf(stdout, NULL, _IONBF, 0); 
	int n, a=1, b; 
	printf("Enter an integer value"); 
	scanf("%i", &n); 

	while(a<n){ 

	if (n%a == 0) 
	{ 
		b=n/a; 
		printf("%i ", b); } 
		a++; 
	} 

	return 0;
}
