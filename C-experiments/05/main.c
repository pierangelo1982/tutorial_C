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
    printf("fahr\tcelsius\n");
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    lower = 0;      /* valore minimo in gradi Celsius nella tabella delle
                       temperature  */
    upper = 300;     /* valore massimoin gradi Celsius   */
    step =  20;     /* intervallo fra due temperature in gradi Celsius
                      adiacenti */
    
    celsius = lower;
    printf("\ncelsius\tfahr\n");
    while(celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%3.0f\t%3.0f\n", celsius, fahr);
        celsius = celsius + step;
  } 
}
