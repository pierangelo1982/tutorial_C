#include <stdio.h>

/* esercizio 1.8 C */


/* si scriva un programma in cui i dati in uscita replichino 
 * i dati in ingresso sostituendo però una stringa di uno o più
 * spazi con uno spazio singolo */

#define NONBLANK '-'

int main(void)
{
    int c, lastc;

    lastc = NONBLANK;

    while((c=getchar()) != EOF) 
    {
        if(c == ' ') 
        {
            if(lastc != ' ')
            {
                putchar(c);
            }
        } 
        else 
        {
            putchar(c);
        }
        lastc=c;
    }
    return 0;
}
