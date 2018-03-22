#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int minValue(int x[], int from, int to){
	int i, min = INT_MAX;
	if(from==to){
		return x[from];
	}else if(x[from]<x[to]){
		return minValue(x, from, to-1);
	}else if(x[from]>x[to]){
		return minValue(x, from+1, to);
	}
}

int main(void) {
	int arr[8] = {-4, 3, -2, -7, 2, 5, -1, 0};
	printf("min Value = %i \n", minValue(arr, 0, 7));
	return 0;
}