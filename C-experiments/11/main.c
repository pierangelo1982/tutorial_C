#include <stdio.h>

/* rende i dati in uscita una replica dei dati in ingresso; 
 * seconda versione */
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        printf("%d", c != EOF);
        putchar(c);
    }

}
