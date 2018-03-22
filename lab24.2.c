
#include <stdio.h>

void stringCopy(char *fromStr, char *toStr) {
	int i = 0;
	while(*(fromStr+i) !='\0'){
		*(toStr+i) = *(fromStr+i);
		i++;
	}
	*(toStr+i) = '\0';
}

_Bool areEqual(char *str1, char *str2) {

	int i = 0;
	while((*(str1+i) !='\0') || (*(str2+i) !='\0')){

		if(*(str1+i) != *(str2+i)){
			return 0;
		}
		i++;
	
	}	
	return 1;
}


void reverse(char *fromStr, char *toStr) {
	int i = 0,j=0,a;
	char *begin = *fromStr;

	while(*fromStr !='\0'){
		fromStr++;
	}

	fromStr--;
	
	while(*fromStr !='\0'){
		fromStr++;
	}

	for (j = 0; j < a; j++)
	{
		*(toStr+j) = *(fromStr+i);
		i--;
	}
	*(toStr+j)='\0';

}

void concatenate(char *str1, char *str2, char *resultStr) {
	int i = 0,j=0,a,b,t,k;
	while(*(str1+i) !='\0'){
		i++;
	}
	
	while(*(str2+j) !='\0'){
		j++;
	}
	for (k = 0; k < i; ++k)
	{
		*(resultStr+k) = *(str1+k);	/* code */
	}
	for (t=0; k < (i+j); ++k,++t)
	{
		*(resultStr+k) = *(str2+t);	
	
	}
	*(resultStr+k) = '\0';

}

int main(void) {

	char word1[] = "Hello";
	char word2[] = "Hi there";
	char word3[] = {'H', 'e', 'l', 'l', 'o', '\0', 'X'};
	char word4[] = "Hi";

	char result[50];

	// Test code for stringCopy
	stringCopy(word1, result);
	printf("Test 1.1 result: %s\n", result);
	stringCopy(word2, result);
	printf("Test 1.2 result: %s\n", result);
	stringCopy(word3, result);
	printf("Test 1.3 result: %s\n", result);

	// Test code for areEqual
	printf("Test 2.1 result: %i\n", areEqual(word1, word2));
	printf("Test 2.2 result: %i\n", areEqual(word1, word3));
	printf("Test 2.3 result: %i\n", areEqual(word2, word4));
	printf("Test 2.4 result: %i\n", areEqual(word4, word2));

	// Test code for reverse
	reverse(word1, result);
	printf("Test 3.1 result: %s\n", result);
	reverse(word2, result);
	printf("Test 3.2 result: %s\n", result);
	reverse(word3, result);
	printf("Test 3.3 result: %s\n", result);

	// Test code for concatenate
	
	concatenate(word1, word2, result);
	printf("Test 4.1 result: %s\n", result);
	concatenate(word3, word4, result);
	printf("Test 4.2 result: %s\n", result);
	concatenate(word1, word1, result);
	printf("Test 4.3 result: %s\n", result);
	
	return 0;
}