#include <stdio.h>
/* The ideal way of how to declare a constant in C. You should ideally name a constant in uppercase. 
 * If the name of the constant is going to have more than one word, separate each word with an underscore (_). */
#define PI 3.14159

int main(void) {
	//const double VALUE_OF_PI = 3.14159; //This method is very frowned up on because it is slow.
	double radiusOfCircle = 6.5;

	//A double is more accurate than float since it holds twice as much as float, hence it is preferred for calculations.
	double areaOfCircle = PI * (radiusOfCircle * radiusOfCircle); //This is equal to PI * (radiusOfCircle squared/multiplied by itself).
	double circumferenceOfCircle = 2 * PI * radiusOfCircle;

	printf("The area of a circle with radius %lf is %.2lf.\n", radiusOfCircle, areaOfCircle);
	printf("The circumference of a circle with radius %lf is %.2lf.", radiusOfCircle, circumferenceOfCircle);

	getch();
	return 0;
}