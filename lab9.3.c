#include <stdio.h>
#include <math.h>

int main(void) {
	
	

	setvbuf(stdout, NULL, _IONBF, 0); 

	int n,a,c;

	printf("Enter an integer value between 1-366"); 
	scanf("%i", &n); 
	char array[10];
	a = n;
	while(a>6)
	{
		a = a/7;
		
	}
	
	if(a==1){
		
		printf("It's Friday");
	}else if(a==2){
		printf("It's Saturday");
	}else if(a==3){
		printf("It's Sunday");
		
	}else if(a==4){
		printf("It's Monday");
		
	}else if(a==5){
		printf("It's Tuesday");
		
	}else if(a==6){
		printf("It's Wednesday");
		
	}else if(a==7){
		printf("It's Thusday");
	}

	if (n>0 || n<366)
	{
		if(n>=1 && n<=31){

			printf(", January %i",n);
		}else if(n>31 && n <=60){
			printf(", February %i", n-31);
		}else if(n>60 && n <=91){
			printf(", March %i", n-60);
		}else if(n>91 && n <=121){
			printf(", April %i", n-91);
		}else if(n>121 && n <=152){
			printf(", May %i", n-121);
		}else if(n>152 && n <=182){
			printf(", June %i", n-152);
		}else if(n>182 && n <=213){
			printf(", July %i", n-182);
		}else if(n>213 && n <=244){
			printf(", August %i", n-213);
		}else if(n>244 && n <=274){
			printf(", September %i", n-244);
		}else if(n>274 && n <=305){
			printf(", October %i", n-274);
		}else if(n>305 && n <=335){
			printf(", November %i", n-305);
		}else if(n>335 && n <=366){
			printf(", December %i", n-335);
		}

	}
	else{
		printf("error, I said between 1-366");
	}
	return 0;
}
