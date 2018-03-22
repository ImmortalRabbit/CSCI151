#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#define size 5
#define INT
#ifdef INT
	#define ELEMENT_TYPE int
	#define SCANF "%i"
	#define PRINTF "%i"
#elif defined(DOUBLE)
	#define ELEMENT_TYPE double
	#define SCANF "%lf"
	#define PRINTF "%lf"
#endif

int main(void) {
	ELEMENT_TYPE i,arr[size]; 
	ELEMENT_TYPE min = INT_MAX;

	for (i = 0; i < size; ++i)
	{
		scanf(SCANF,&arr[i]);
		if (min>arr[i])
		{
			min = arr[i];
		}
	}
	printf(PRINTF, min);
	return 0;
}
