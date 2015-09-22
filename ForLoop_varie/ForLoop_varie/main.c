//
//  main.c
//  ForLoop_varie
//
//  Created by pierangelo on 16/09/15.
//  Copyright (c) 2015 pierangelo. All rights reserved.
//

#include <stdio.h>

int main() {
    int contatore;
    //incrementa
    for (contatore=0; contatore <=10; contatore++) {
        printf("%d \n", contatore);
    }
    
    // decrementa
    for (contatore = contatore; contatore>=0; contatore--) {
        printf("%d \n", contatore);
    }
    
    // incremento proporzionale
    for (contatore = 1; contatore <= 80; contatore += contatore) {
        printf("%d \n", contatore);
    }
    
    // incremento + numero
    for (contatore = 8; contatore <= 80; contatore += 8) {
        printf("%d \n", contatore);
    }
    
    return 0;
}
