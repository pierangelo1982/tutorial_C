#include <stdio.h>

/* rende i dati in uscita una replica dei dati in ingresso; prima versione */
int main() {
    int c;

    c = getchar();

    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
