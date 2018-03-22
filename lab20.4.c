#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

void concat(char str1[], char str2[], char resultStr[]){
	int count1 = 0, count2 = 0, i;
	while(str1[count1]!='\0'){
		count1++;
	}
	while(str2[count2]!='\0'){
		count2++;
	}
	for (i = 0; i < count1; ++i)
	{
		resultStr[i] = str1[i];
	}
	for (int j = 0; j < count2; ++j,++i)
	{
		resultStr[i] = str2[j];
	}
	printf("%s",resultStr);	
}


int main(void) {
	
	char str1[100],str2[100], resultStr[100];
	scanf("%s", str1);
	scanf("%s", str2);
	concat(str1,str2,resultStr);
	return 0;
}