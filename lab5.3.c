#include <stdio.h>


#include <math.h>

int main(void) {
	
	
	int x,hh,mm,ss;
	scanf("%i",&x);
 	ss = x%60;
	mm = x%3600/60;
	hh = x/3600;
	printf("hh:mm:ss %i:%i:%i",hh,mm,ss);
	

	}
