

#include <stdio.h>


/* Meglio usare printf invece di puts perchè permette
 * the printf() function is used to print both strings and variables to the screen
 * while the puts() function only permits you to print a string only to your screen.*/

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	printf("ciao \n ciao"); // andare a capo con \n
	printf("inserire parola tra \"virgolette\" "); // inserire parola tra virgolette ecc... con \
	//return EXIT_SUCCESS;
	return 0; // messo retutn 0 invece di return EXIT_SUCCESS, dovrebbe essere lo stesso
}
