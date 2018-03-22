#include <stdio.h>


#include <math.h>

int main(void) {
	
	double lab, quiz, final, totas;
	lab = 75;
	quiz = 85;
	final = 90;
	totas = lab*0.2+quiz*0.5+final*0.3;
	printf("The total percentage is %lf", totas);
	return 0;

	}
