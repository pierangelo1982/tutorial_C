//
//  test_operatore.c
//  OperatoriAssegnamentoIncrementoDecremento
//
//  Created by pierangelo on 25/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

// testo operatori incremento nella pratica
int main(void)
{
    
    int contatore;
    int voto;
    int totale;
    float media;
    
    // inizializzo
    contatore = 0;
    totale = 0;
    
    while (contatore <= 5) {
        printf("inserisci voto ");
        scanf("%d", &voto);
        totale += voto; // operatore di incremento (totale = totale + voto);
        contatore += 1; // operatore di icremento (contatore = contatore + 1);
    }
    
    
    media = (float) totale / contatore;
    printf("La Media è di %.2f \n", media);
    printf("il contatore è di %d \n", contatore);
    
    return 0;
}
