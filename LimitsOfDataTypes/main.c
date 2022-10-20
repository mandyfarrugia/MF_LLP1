#include <stdio.h>
#include <limits.h> //Include limits.h to be able to access constants denoting the minimum and maximum boundaries of values accepted by a data type.

int main(void) {
	printf("The minimum value for a signed short int is %d.", SHRT_MIN);
	getch();
	return 0;
}