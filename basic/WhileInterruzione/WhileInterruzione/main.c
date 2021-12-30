//
//  main.c
//  WhileInterruzione
//
//  Created by pierangelo on 25/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void) {

    int contatore;
    int totale;
    int voto;
    float media;
    
    // inizializzo
    contatore = 0;
    totale = 0;
    
    printf("Inserisci voto, -2 per uscire ");
    scanf("%d", &voto);
    
    while (voto != -2) {
        printf("Inserisci Voto, -2 per uscire ");
        scanf("%d", &voto);
        totale = totale + voto;
        contatore = contatore + 1;
    }
    
    // calcolo media
    if (contatore != 0) {
        media = (float) totale / contatore;
        printf("il voto medio della classe è %.2f \n", media);
    } else {
        printf("Non hai inserito nessun voto, impossibile ottenere la media");
    }
    
    return 0;
}
