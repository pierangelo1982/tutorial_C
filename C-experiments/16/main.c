#include <stdio.h>

/* esercizio 1.8 C */

/* conta il numero di
 * spazi bianchi
 * caratteri di tabulazione
 * nuove linee */

int main(void)
{
    /* ws = white space
     * ts = tab space
     * nl = new line */
    int c, ws, ts, nl;
   
    ws = 0;
    ts = 0; 
    nl = 0;
    while((c=getchar()) != EOF) {
        if (c == ' ') {
            ++ws;
        }
        if (c == '\t') {
            ++ts;
        }
        if (c == '\n') {
            ++nl;
        }
    }
    printf("white spaces %d\n", ws);
    printf("tab spaces %d\n", ts);
    printf("new line: %d\n", nl);
}
