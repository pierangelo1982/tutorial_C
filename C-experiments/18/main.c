#include <stdio.h>

/* esercizio 1.10 C */


/* Si scriva un programma i cui dati in uscita replichino i dati
 * in ingresso, sostitutento i caratteri di tabulazione con \t,
 * ogni backpace con \b w ogni barra inversa con \\, cosi da rendere
 * perfettamente visibili le tabulazioni e le cancellazioni */

#define NONBLANK '-'

int main(void)
{
    int c, lastc;

    lastc = NONBLANK;

    while((c=getchar()) != EOF) 
    {

        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }

        if (c == '\b') {
            putchar('\\');
            putchar('b');
        }

        if(c == '\t') {
            putchar('\\');
            putchar('\\');
        }

        if (c != '\t' && c != '\b' && c != '\\') {
            putchar(c);
        }
    }
    return 0;
}
