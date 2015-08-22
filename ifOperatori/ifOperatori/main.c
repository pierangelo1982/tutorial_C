//
//  main.c
//  ifOperatori
//
//  Created by pierangelo on 22/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int numero1, numero2;
    
    printf("inserisci due numeri interi e ti dirò la relazione che esiste tra di loro \n");
    
    scanf("%d%d", &numero1, &numero2); //andpercent definisce indirizzo allocazione memoria;
    
    
    // uguaglianza
    if (numero1 == numero2) {
        printf("%d è uguale a %d \n", numero1, numero2);
    }
    
    // differenza
    if (numero1 != numero2) {
        printf("%d è diverso da %d \n", numero1, numero2);
    }
    
    // maggiore
    if (numero1 > numero2) {
        printf("%d è maggiore di %d \n", numero1, numero2);
    }
    
    // minore
    if (numero1 < numero2) {
        printf("%d è minore di %d \n", numero1, numero2);
    }
    
    // maggiore o uguale
    if (numero1 >= numero2) {
        printf("%d è maggiore o uguale a %d \n", numero1, numero2);
    }
    
    // minore o uguale
    if (numero1 <= numero2) {
        printf("%d è minore o uguale a %d \n", numero1, numero2);
    }
    
    return 0;
    
}
