#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

void sumofarray(char string[]){
	int count = 0, result = 0, intValue;
	
	for (int i = 0; i < strlen(string); ++i)
	{
		if(string[i]>='0' && string[i]<='9'){
			intValue = atoi(string[i]);
			result = result + intValue;
		}
	}
	printf("%i\n",result);
}
int main(void) {
	
	FILE *fope;
	fope = fopen("data21.txt", "r");
	int i = 0;
	char string[100],temp[100];

	do
	{
		fscanf(fope, "%s", temp);
		strcat (string, temp);
	}while (!feof(fope));

	sumofarray(string);

	fclose(fope);
	return 0;
}