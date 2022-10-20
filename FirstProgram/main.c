/* #include is used to import header files/libraries into our program. 
 * Header files/libraries are imported to extend our application in terms of functionality. 
 * stdio.h is used to be able to print text or data to the console window. */
#include <stdio.h>

/* The main method must be included in the C file.
 * This is the entry point to our program.
 * If the operating system does not find this method, then the program cannot run. */
int main(void) {
	printf("Hello World!"); //Prints "Hello World" to the console.
	getch(); //Pauses the program until the user presses a key otherwise the console window immediately closes after compilation.
	return 0; //When main() returns 0, it means that the program has executed successfully.
}