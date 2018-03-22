#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

double strToDouble(char str[]) {
	double num, result = 0.0,sign=1.0,signofpower=0,tempo=0,decleno=0,digitalo=0,decimalo=0,powero=0,intValue;
	char digital[100]={'0'},decimal[100]={'0'},power[100]={'0'},temp[100];
	int i,j;
	if(str[0]=='-'){
		sign = -1.0;
		i=1;
	}
	else{
		sign = 1.0;
		i=0;
	}

	for (i=i; i < strlen(str); ++i)
	{
		if(str[i] >= '0' && str[i] <= '9') {
			intValue = str[i] - '0';
 			digitalo = digitalo * 10 + intValue;
		} else {
			break;
		}
	}
	result = digitalo;
	
	if(str[i]=='.'){
		i++;		
			for (i=i,j=1; i < strlen(str); ++i,++j)
			{
				if(str[i] >= '0' && str[i] <= '9') {
					intValue = str[i] - '0';
 					decimalo = decimalo + intValue*pow(0.1,j);
				} else {
					break;
				}
			}
		}
	result = sign*(result + decimalo);
	if(str[i]=='e'){
		i++;
			if(str[i]=='-'){
					signofpower = -1.0;
					i++;
				}
				else{
					signofpower = 1.0;
			}
		
			for (i=i,j=0; i < strlen(str); ++i,++j)
			{
				if(str[i] >= '0' && str[i] <= '9') {
					intValue = str[i] - '0';
 					powero = powero * 10 + intValue;
				} else {
					break;
				}
			}
	result = result*pow(10,signofpower*powero);
	return result;
}
}
	



int main(void) {
	
	char string[100];
	scanf("%s",string);
	printf("%lf\n",strToDouble(string));
	return 0;
}

