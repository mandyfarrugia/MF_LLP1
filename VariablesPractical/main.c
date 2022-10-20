#include <stdio.h>

int main(void) {
	char name[15] = "Mandy";
	/* Used unsigned short to prevent negative values being stored in age. 
	 * It would make sense for an age to be a negative value. */
	unsigned short age = 20; //unsigned short int age = 20; works as well.
	float height = 1.58f;

	/* To print the contents of a variable of type unsigned short/unsigned short int, we use the format specifier %hd.
	 * Use %.2f to print the contents of a float variable to 2 decimal places.
	 * Use %.2lf to print the contents of a double variable to 2 decimal places.
	 * You can display a double/float in any decimal place of your liking. */
	printf("My name is %s, I am %hd years old. I am %.2f metres tall.\n", name, age, height);

	getch();
	return 0;
}