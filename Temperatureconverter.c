#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    float temperatura;
    char escala;

    scanf("%f %c", &temperatura, &escala);

    if (escala == 'C') {
        printf("Celsius: %.2f\n", temperatura);
        printf("Farenheit: %.2f\n", (temperatura * 1.8) + 32);
        printf("Kelvin: %.2f\n", temperatura + 273.15);
    } else if (escala == 'F') {
        printf("Celsius: %.2f\n", (temperatura - 32) / 1.8);
        printf("Farenheit: %.2f\n", temperatura);
        printf("Kelvin: %.2f\n", ((temperatura - 32) / 1.8) + 273.15);
    } else if (escala == 'K') {
        printf("Celsius: %.2f\n", temperatura - 273.15);
        printf("Farenheit: %.2f\n", ((temperatura - 273.15) * 1.8) + 32);
        printf("Kelvin: %.2f\n", temperatura);
    } else {
        printf("Escala não identificada, lembre que a resposta deve ser escrita em maiúsculo e só com a letra inicial (C(Celsius), F(Farenheit) ou K(Kelvin))\n");
    }

    return 0;
}
