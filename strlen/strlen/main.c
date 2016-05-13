//
//  main.c
//  strlen
//
//  Created by pierangelo on 24/09/15.
//  Copyright © 2015 pierangelo. All rights reserved.
//

#include <stdio.h>
#include <string.h>

/*
 
  P   I   E   R   A   N   G   E   L   O
 [0] [1] [2] [3] [4] [5] [6] [7] [8] [9]
 
 */

int main() {
    
    char name[20]; // lunghezza che può contenere (20 caratteri in questo caso);
    int i;
    
    printf("Insert your name? ");
    scanf("%s", name); /// stavolta non ci va la & perchè non è un numero;
    
    for (i = strlen(name) - 1; i >= name; i--) {
        printf("%c", name[i]);
    }
    
    return 0;
}
