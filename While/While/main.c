//
//  main.c
//  While
//
//  Created by pierangelo on 23/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void) {

    int contatore;
    int voto;
    int totale;
    int media;
    
    
    contatore = 0;
    totale = 0;
    
    while (contatore <= 5) {
        printf("Inserisci voto ");
        scanf("%d", &voto);
        totale = totale + voto; // al totale della riga precedente aggiungo il voto, e via cosi riga x riga del loop
        contatore = contatore + 1; // idem per il contatore, aggiungo 1 per ogni riga del loop while
    }
    
    media = totale / contatore;
    
    printf("La media della classe è %d", media);
    
    return 0;
    
    
}
