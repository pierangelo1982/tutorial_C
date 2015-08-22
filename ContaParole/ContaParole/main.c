//
//  main.c
//  ContaParole
//
//  Created by pierangelo on 22/08/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    char parola;
    
    printf("inserisci il tuo nome\n");
    scanf("%s", &parola);  // %s invece di %d perchè è una stringa (char) e non un numero (int)
    
    
    int totale = strlen(&parola);  // strlen conta lunghezza caratteri
    printf("il tuo nome è lungo %d caratteri\n", totale);
    
    return 0;
    
    

}
