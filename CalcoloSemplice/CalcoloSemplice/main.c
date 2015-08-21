//
//  main.c
//  CalcoloSemplice
//
//  Created by pierangelo on 21/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void)
{

    int num1 = 10;
    int num2 = 20;
    
    // somma
    int somma = num1 + num2;
    printf("la somma di %d + %d è %d \n \n", num1, num2, somma); // \n \n per andare a capo...
    
    // moltiplicazione
    int moltiplicazione = num1 * num2;
    printf("la moltiplicazione di %d per %d è %d \n \n", num1, num2, moltiplicazione);  // \n idem come sopra...
    
    // divisione
    float divisione = (float) num1 / (float) num2;
    printf("%d diviso %d fa %f", num1, num2, divisione);  // definito divisione con %f xchè float;
}
