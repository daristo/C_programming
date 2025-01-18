#include <stdio.h>
/* print Celsius-Fahrenheit table
for fahr = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = -20; /* lower limit */
    upper = 50;  /* upper limit */
    step = 5;    /* step size */
    celsius = lower;
    printf("Celsius Fahrenheit\n");
    while (celsius <= upper)
    {
        fahr = ((celsius * 9)/5) +32  ; /* обратната формула */
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}