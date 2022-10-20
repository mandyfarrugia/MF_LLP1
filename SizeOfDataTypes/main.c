#include <stdio.h>

//We use sizeof() to figure out how much space a variable of a certain data type takes up in memory in bytes.
int main(void) {
	short sNum = 3000;
	unsigned short usNum = 23;
	int iNum = 20000000; //an int is signed by default, thus int and signed int mean the same thing.
	unsigned int uiNum = 224;
	long int liNum = 22324;
	unsigned long int uliNum = 99241;
	long long int lliNum = 99999999999999;
	unsigned long long int ulliNum = 2222222222222222;
	float fNum = 2.1f;
	double dNum = 32.1;
	long double ldNum = 99924.241L; //L/l denotes that we are forcing the compiler to treat 99924.241 as a long double rather than double.
	char ch = 'D';
	char name[20] = "Mandy"; //char[] is known as an array of characters.

	//The format specifier to print the size of a data type is %zu.
	printf("Size of an signed short int: %zu bytes\n", sizeof(sNum));
	printf("Size of an unsigned short int: %zu bytes\n", sizeof(usNum));
	printf("Size of an signed int: %zu bytes\n", sizeof(iNum));
	printf("Size of an unsigned int: %zu bytes\n", sizeof(uiNum));
	printf("Size of a signed long int: %zu bytes\n", sizeof(liNum));
	printf("Size of a unsigned long int: %zu bytes\n", sizeof(uliNum));
	printf("Size of a signed long long int: %zu bytes\n", sizeof(lliNum));
	printf("Size of an unsigned long long int: %zu bytes\n", sizeof(ulliNum));
	printf("Size of a float: %zu bytes\n", sizeof(fNum));
	printf("Size of a double: %zu bytes\n", sizeof(dNum));
	printf("Size of long double: %zu bytes\n", sizeof(ldNum));
	printf("Size of a char: %zu bytes\n", sizeof(ch));
	printf("Size of an array of characters: %zu bytes\n\n", sizeof(name));

	//You can also find out the size of a data type rather than just how much space a variable takes up in memory.
	printf("The size of the integer data type: %zu bytes", sizeof(int));

	getch();
	return 0;
}