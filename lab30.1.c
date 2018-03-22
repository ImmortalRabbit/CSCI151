#include <stdlib.h>
#include <stdio.h>


#define lab 5
#define quiz 6
#define DROP_LOWEST_QUIZ 1

int main(void) {
	double min = 200.0,sumoflab,sumofquiz,sum;
	double prolab[lab],proquiz[quiz],final;
	int i,drop;
	printf("Input complab grades \n");
	for(i=0;i<lab;i++){
		scanf("%lf", &prolab[i]);
	}

	printf("Input quiz grades \n");

	for(i=0;i<quiz;i++){
		scanf("%lf", &proquiz[i]);
	}

	printf("Input complab grades \n");
	scanf("%lf", &final);

	if(DROP_LOWEST_QUIZ==1){
		for(i=0;i<quiz;i++){
			if(min>proquiz[i]){
				min = proquiz[i];
				drop = i;
			}
		}
		for (i = 0; i < quiz; ++i){
			if(i!=drop){
				sumofquiz = sumofquiz + proquiz[i];
			}	
		}
		printf("%lf\n",sumofquiz );
		sumofquiz = sumofquiz/(15*(quiz-1))*50;
	}else{
		for (i = 0; i < quiz; ++i){
			sumofquiz = sumofquiz + proquiz[i];
		}
		sumofquiz = sumofquiz/(15*quiz)*50;
	}


	for (i = 0; i < lab; ++i){
		sumoflab = sumoflab + prolab[i];
	}

	sumoflab = sumoflab/(100*lab)*20;
	final = final/100*30;
	sum = sumoflab + sumofquiz + final;
	printf("%lf\n",sum);
	return 0;
 
}
