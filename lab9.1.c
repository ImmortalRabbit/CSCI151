#include <stdio.h>
#include <math.h>

int main(void) {
	
	

setvbuf(stdout, NULL, _IONBF, 0); 

int a; 
printf("Enter your final course grade percentage"); 
scanf("%i", &a); 
if (a>=90) { 
printf("Your final letter grade is A"); 
} 
else if (a>=75) { 
printf("Your final letter grade is B"); 
} 
else if (a>=60) { 
printf("Your final letter grade is C"); 
} 
else if(a>=0) { 
printf("Your final letter grade is D"); 
} 

return 0;
}
