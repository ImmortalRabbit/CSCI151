#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

long choose(int n, int k){
	printf("%i\n",n/k );
	if(n==k){
		return 1.0;
	} else if(k==1.0){
		return n;
	} else {
		return (long)(choose(n-1,k-1)*(double)n/(double)k);
	}

}
int main(void) {
	int n,k;
	scanf("%i",&n);
	scanf("%i",&k);
	printf("%li ", choose(n,k));
	return 0;
}