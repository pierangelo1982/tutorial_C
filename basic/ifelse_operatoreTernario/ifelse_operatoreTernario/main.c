//
//  main.c
//  ifelse_operatoreTernario
//
//  Created by pierangelo on 22/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int valore;
    
    printf("inserisci un valore\n");
    scanf("%d", &valore);
    
    // operatore ternario = accetta tre operandi
    valore >= 60 ? printf("sei stato promosso") : printf("sei stato bocciato");
    
    return 0;

}
