#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

_Bool areEqual(char str1[], char str2[]){
	int count1 = 0,count2;
	while(str1[count1]!='\0'){
		count1++;
	}
	while(str2[count2]!='\0'){
		count2++;
	}
	if (count1==count2)
	{
		for (int i = 0; i < count1; ++i)
			{
				if(str1[i]!=str2[i]){
					return 0;
					break;
				}
			}	
		return 1;
	}
	else{
		return 0;
	}
}

int main(void) {
	char str1[100],str2[100];
	scanf("%s", str1);
	scanf("%s", str2);
	_Bool equal = areEqual(str1, str2);
	if(equal==0){
		printf("False");
	}else{
		printf("True");
	}
	return 0;
}