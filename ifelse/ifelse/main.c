//
//  main.c
//  ifelse
//
//  Created by pierangelo on 22/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int valore;
    
    printf("Inserisci un valore numerico\n");
    scanf("%d", &valore);
    
    if (valore >= 60) {
        printf("sei stato promosso");
    }
    else {
        printf("sei stato bocciato");
    }
    
    return 0;

}
