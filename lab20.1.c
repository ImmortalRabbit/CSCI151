#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

void stringCopy(char fromStr[], char toStr[]){
	int	i=0;
	do{
		toStr[i] = fromStr[i];
		i++;
	}
	while(fromStr[i]!='\0');
	toStr[i]='\0';
	printf("%s", toStr);
}

int main(void) {
	char fromStr[100],toStr[100];
	scanf("%s", fromStr);
	stringCopy(fromStr, toStr);
	return 0;
}