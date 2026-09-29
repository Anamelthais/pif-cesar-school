#include <stdio.h>

int main(void) {
    double fahrenheit, kelvin;

    printf("%10s %12s %12s\n", "Celsius", "Fahrenheit", "Kelvin");

    for (int celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32;
        kelvin = celsius + 273.15;

        printf("%10.2f %12.2f %12.2f\n",
               (double)celsius, fahrenheit, kelvin);
    }

    return 0;
}