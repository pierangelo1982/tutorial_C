//
//  main.c
//  palindrome
//
//  Created by pierangelo on 16/05/16.
//  Copyright © 2016 pierangelo. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    int reverse = 0;
    int temp;
    
    printf("Inserisci un numero e controlla se è palindromo o no\n");
    scanf("%d", &n);
    
    temp = n;
    
    while (temp != 0) {
        reverse = reverse * 10;
        reverse = reverse + temp%10;
        temp = temp/10;
    }
    
    if (n==reverse) {
        printf("%d è un numero palindromo.\n", n);
    } else {
        printf("%d non è un numero palindromo.\n", n);
    }
    
    return 0;
}
