#include <stdlib.h>
#include <stdio.h>
typedef	struct $
{
	int data;
	double averagetemp;
	double averagewind;	
}weather;


int main(void) {

	weather *ast = (weather*)malloc(12*sizeof(weather));

	FILE *astana;
	astana = fopen("astana.txt","r");

	if (astana == NULL) {
 		printf("Problem opening file.");
 		return 1;
 	}

	int i = 0,j;
	do {
		fscanf(astana, " %i %lf %lf", &ast[i].data, &ast[i].averagetemp, &ast[i].averagewind);
		i++;
	} while (!feof(astana));

	i --;
	int total = 0;
	for (j = 0; j<i; ++j)
	{
		total = total + ast[j].data;
	}
	
	printf("Total rainfall: %i\n",total);
	printf("\n");
	double min = 100000.0;

	for (j = 0; j<i; ++j)
	{
		if(min>ast[j].data){
			min = ast[j].averagetemp;
		}
	}

	printf("Minimum temperature: %lf\n",min);
	printf("\n");

	double tot=0;

	for (j = 0; j<i; ++j){
		tot = tot + ast[j].averagewind;
	}

	printf("average wind speed: %lf\n",tot/j);

	printf("\n");
	for (j = 0; j<i; ++j){
		printf("%i : %lf : %lf\n", ast[j].data, ast[j].averagetemp, ast[j].averagewind );
	}

	free(ast);
	return 0;

}
