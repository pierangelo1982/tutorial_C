//
//  main.c
//  scanF
//
//  Created by pierangelo on 21/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    // dichiaro variabili
    int numero1;
    int numero2;
    int somma;
    
    printf("inserisci primo numero \n");
    scanf("%d", &numero1); // inserisco tramite tastiera o altro mezzo di input un valore
    
    printf("inserisci secondo numero \n");
    scanf("%d", &numero2);
    
    somma = numero1 + numero2;  // operazione di somma
    
    printf("il totale è: %d\n", somma);
    
    return 0;
    
}
