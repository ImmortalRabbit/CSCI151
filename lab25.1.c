#include <stdlib.h>
#include <stdio.h>

char* stringCopy(char *fromStr){
	int i = 0;
	while(*fromStr !='\0'){
		i++;
	}
	char *vals = malloc(i*sizeof(char));
	i = 0;
	while(*fromStr !='\0'){
		*(vals+i) = *fromStr;
		fromStr++;
		i++;
	}

	*(vals+i) = '\0';

	
   return vals;
}


int main(void) {

	char word1[] = "Hello";
	char word2[] = "Hi there";
	char word3[] = {'H', 'e', 'l', 'l', 'o', '\0', 'X'};
	char word4[] = "Hi";
	char *res = stringCopy(word1);
	
	while(*res != '\0'){
		printf("%c", *res);
		res++;	
	}
	return 0;
}
