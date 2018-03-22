#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

void writeln(char letters[100]) {
	int i = 0;
	while (letters[i] != '\0') {

		putchar(letters[i]);
		i++;
	}

	putchar('\n');
}

int main( ) {

	char arr[] = "abcdef";
	char *ptr = "ghijklmnop";

	writeln(arr);
	writeln(ptr);
	writeln("qrstuv");

	return 0;
}
