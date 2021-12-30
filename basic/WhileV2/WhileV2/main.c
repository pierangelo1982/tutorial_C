//
//  main.c
//  WhileV2
//
//  Created by pierangelo on 23/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int alunni;
    int contatore;
    int voto;
    int totale;
    float media;
    
    // gli passo il limite dei loop tramite input
    printf("Inserisci il numero degli alunni\n");
    scanf("%d", &alunni);
    
    contatore = 0; // inizializzo il contatore
    totale = 0; // inizializzo il voto
    
    while (contatore <= alunni) {
        printf("Inserisci il voto ");
        scanf("%d", &voto);
        totale = totale + voto;
        contatore = contatore + 1;
    }
    
    //media = (float) totale / alunni;
    media = (float) totale / contatore;  // posso dividerlo sia x valore del contatore che degli alunni che è il medesimo
    printf("La media dei voti è: %.2f", media);
    
    return 0;

}
