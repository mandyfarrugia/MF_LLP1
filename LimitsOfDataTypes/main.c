#include <stdio.h>
#include <limits.h> //Include limits.h to be able to access constants denoting the minimum and maximum boundaries of values accepted by a data type.
#include <float.h> //Include float.h to see the minimum and maximum values allowed by real number data types such as float, double and long double.

int main(void) {
	//Minimum and maximum limits for a signed short int.
	printf("The minimum value for a signed short int is %hd.\n", SHRT_MIN);
	printf("The maximum value for a signed short int is %hd.\n", SHRT_MAX);

	/* The maximum limit for an unsigned short int.
	 * The format specifier for an unsigned short int is %hu. 
	 * There is no mimimum limit for an unsigned short int since it is 0. */
	printf("The maximum value for an unsigned short int is %hu.\n", USHRT_MAX);

	//Minimum and maximum limits for a signed int.
	printf("The minimum value for a signed int is %d.\n", INT_MIN);
	printf("The maximum value for a signed int is %d.\n", INT_MAX);

	/* The maximum limit for an unsigned int.
	 * The format specifier for a unsigned int is %u. 
	 * There is no minimum limit for an unsigned int since it is 0. */
	printf("The maximum value for an unsigned int is %u\n.", UINT_MAX);

	//The minimum and maximum limit for a signed long int.
	printf("The minimum value for a signed long int is %ld.\n", LONG_MIN);
	printf("The maximum value for a signed long int is %ld.\n", LONG_MAX);

	/* The minimum and maximum limit for an unsigned long int.
	 * The format specifier for a unsigned long int is %u. 
	 * There is no minimum limit for an unsigned long int since it is 0. */
	printf("The maximum value for an unsigned long int is %u.\n", ULONG_MAX);

	/* The minimum and maximum limit for a signed long long int.
	 * The format specifier for a signed long long int is %lld. */
	printf("The minimum value for a signed long long int is %lld.\n", LLONG_MIN);
	printf("The maximum value for a signed long long int is %lld.\n", LLONG_MAX);

	/* The minimum and maximum limit for an unsigned long long int.
	 * The format specifier for a unsigned long long int is %lld.
	 * There is no minimum limit for an unsigned long long int since it is 0. */
	printf("The maximum value for an unsigned long long int is %llu.\n", ULLONG_MAX);

	/* The minimum and maximum limit for a float.
	 * The format specifier for a float is %f. */
	printf("The maximum value for a float is %f.\n", FLT_MIN);
	printf("The maximum value for a float is %f.\n", FLT_MAX);

	/* The minimum and maximum limit for a double.
	 * The format specifier for a double is %lf. */
	printf("The maximum value for a double is %lf.\n", DBL_MIN);
	printf("The maximum value for a double is %lf.\n", DBL_MAX);

	/* The minimum and maximum limit for a long double.
	 * The format specifier for a long double is %Lf. */
	printf("The maximum value for a long double is %Lf.\n", LDBL_MIN);
	printf("The maximum value for a long double is %Lf.\n", LDBL_MAX);

	/* The minimum and maximum limit for a signed char.
	 * The format specifier for a signed char is %c. */
	printf("The maximum value for a signed char is %d.\n", CHAR_MIN); //Use %d to display the limits.
	printf("The maximum value for a signed char is %d.\n", CHAR_MAX); //Use %d to display the limits.

	/* The minimum and maximum limit for an unsigned char.
	 * The format specifier for an unsigned char is %c.
	 * There is no minimum limit for an unsigned char int since it is 0.*/
	printf("The maximum value for a unsigned char is %d.\n", UCHAR_MAX); //Use %d to display the limits.

	getch();
	return 0;
}