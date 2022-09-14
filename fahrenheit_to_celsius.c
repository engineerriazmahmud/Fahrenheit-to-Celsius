#include <stdio.h>

int main (void) {
    float fahrenheit, celsius;

    /* Input temperature in fahrenheit */
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    /* Fahrenheit to celsius conversion formula */
    celsius = (fahrenheit - 32) * 5 / 9;

    /* Print the value of celsius */
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

return 0;
}