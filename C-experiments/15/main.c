#include <stdio.h>

/* conta il numero di righe del testo in ingresso */

int main(void)
{
    
    int c, nl;
    
    nl = 0;
    while((c=getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }
    printf("%d\n", nl);
}
