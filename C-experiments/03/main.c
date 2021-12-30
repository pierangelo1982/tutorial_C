#include <stdio.h>

/* visualizza la tabella Fahreneit-Celsius 
 * per fahe = 0m 200, ..., 300 */
void main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* valore minimo in gradi F nella tabella delle
                       temperature */
    upper = 300;    /* valore massimo in gradi F */
    step = 20;      /* intervallo fra due temperature in gradi F
                       adiacenti */

    fahr = lower;
    while(fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
