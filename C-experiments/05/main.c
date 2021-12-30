#include <stdio.h>

/* visualizza la tabella Fahreneit-Celsius 
 * per fahe = 0m 200, ..., 300 */
void main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* valore minimo in gradi F nella tabella delle
                       temperature */
    upper = 300;    /* valore massimo in gradi F */
    step = 20;      /* intervallo fra due temperature in gradi F
                       adiacenti */

    fahr = lower;
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
