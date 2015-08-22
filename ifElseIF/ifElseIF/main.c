//
//  main.c
//  ifElseIF
//
//  Created by pierangelo on 22/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void)
{

    int valore;
    
    printf("inserisci un valore\n");
    scanf("%d", &valore);
    
    if (valore >= 60) {
        printf("Voto A");
    }
    else if (valore >= 50) {
        printf("Voto B");
    }
    else if (valore >= 40) {
        printf("voto C");
    }
    else if (valore >= 30) {
        printf("voto d");
    }
    else {
        printf("Sei bocciato");
    }
    
    return 0;
}
