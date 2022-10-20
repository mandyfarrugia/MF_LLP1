#include <stdio.h> //Whenever you know that you are going to use printf(), use #include <stdio.h>

int main(void) {
	int iNum = 20; //An integer can only store a whole number (int and long int mean the same thing). It is 32-bits wide (4 bytes).
	short sNum = 90; //A short is half the size of an integer. Therefore, it is 16-bits wide (2 bytes).
	double dNum = 5.92; //Both double and float can store decimal numbers with points, as well as fractions.
	float fNum = 44.25f; //Use f suffix at the end to force the compiler to treat 44.25 as a float not a double.
	char ch = 'D'; //char by itself stores only one character.
	char name[50] = "Mandy"; //[50] denotes that a maximum of 50 characters can be stored in this variable.
	long long llNum = 9999999999999; //long long int and long long mean the same thing. It is 64-bits wide (8 bytes).
	long double ldNum = 492452.453525; //long double is 12 bytes long.

	/* A double stores twice as much as float. float is 32-bits wide (4 bytes), whereas double is 64-bits wide (8 bytes). 
	 * 1 byte is equal to 8 bits. Therefore, float is 8-bits * 4 bytes = 32-bits and double is 8-bits * 8 bytes = 64-bits. */

	/* Format specifiers are a way of displaying the contents of a variable depending on its data type.
	 * %d is used to print the contents of variables of type int and short (specifically %hd for signed short). 
	 * %lf is used to print the contents of variables of type double. 
	 * %f is used to print the contents of variables of type float.
	 * %c is used to print the contents of variables of type char.
	 * %s is used to print the contents of variables of type char[] (or a string as known in C# or Java).
	 * %lld is used to print the contents of variables of type long long. */
	printf("%d\n", iNum); //The escape character '\n' is used to skip a line because printf() does not skip a line.
	printf("%lf\n", dNum);
	printf("%f\n", fNum);
	printf("%c\n", ch);
	printf("%s\n", name);
	printf("%lld\n", llNum);
	printf("%Lf\n", ldNum);

	getch();
	return 0;
}