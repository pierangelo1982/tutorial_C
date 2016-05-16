//
//  main.c
//  decimal_formula
//
//  Created by pierangelo on 13/05/16.
//  Copyright © 2016 pierangelo. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    char *decimale;
    long lunghezza;
    int contatore;
    int totale;
    
    decimale = "11000000";
    lunghezza = strlen(decimale);
    
    totale = 0;
    contatore = 0;
    
    while (0 <= lunghezza)
    {
        printf("%c\n", decimale[lunghezza]);
        lunghezza -= 1;
        if (decimale[lunghezza] == '1')
        {
            totale += pow(2,contatore);
        }
        contatore += 1;
    }
    
    printf("la conversione risulta: %d\n", totale);
    return totale;
}
