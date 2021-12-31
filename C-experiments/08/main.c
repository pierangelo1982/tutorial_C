#include <stdio.h>

#define     LOWER   0       /* valore minimo in fradi F nella tabella delle
                                temperature   */
#define     UPPER   300     /* valore massimo in gradi F */
#define     STEP    20      /*  intervallo fra due temperature in gradi F
                                adiacenti */
/* visualizza la tabella Fahrenheit-Celsius */
int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
