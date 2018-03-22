#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

void stringCopy(char fromStr[], char toStr[]){
	int count = 0,temp;
	while(fromStr[count]!='\0'){
		count++;
	}
	temp = count;
	count--;
	for (int i = 0; i<temp; ++i, --count)
	{
		toStr[i]=fromStr[count];
	}
	toStr[8] = '\0';
	printf("%s", toStr);
}

int main(void) {
	char fromStr[100],toStr[100];
	scanf("%s", fromStr);
	stringCopy(fromStr, toStr);
	return 0;
}