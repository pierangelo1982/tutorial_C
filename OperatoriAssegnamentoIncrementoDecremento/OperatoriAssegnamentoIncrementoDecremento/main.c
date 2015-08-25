//
//  main.c
//  OperatoriAssegnamentoIncrementoDecremento
//
//  Created by pierangelo on 25/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int a;
    
    a = 10;
    
    // incremento
    a +=3;
    printf("il risulato è %d\n", a);
    
    //decremento - ovviamente decrementa l'ultimo valore assegnato ad "a"
    a -= 4;
    printf("il risultato è %d\n", a);
    
    // incremento ++variabile (pre incremento)
    a = ++a;
    printf("il risultato è %d\n", a);
    
    /* post incremento
    a = a++;
    printf("il risultato è %d\n", a); */
    
    // per incremento
    a *= 3;
    printf("il risultato è %d \n", a);
    
    return 0;
}
