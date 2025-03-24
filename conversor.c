#include <stdio.h>

void convertirMoneda(float cantidad, int opcionOrigen, int opcionDestino) {
    float tasas[3][3] = {
        {1.0, 0.13, 0.12}, // Quetzal a {Quetzal, Dólar, Euro}
        {7.85, 1.0, 0.92}, // Dólar a {Quetzal, Dólar, Euro}
        {8.50, 1.09, 1.0}  // Euro a {Quetzal, Dólar, Euro}
    };

    float resultado = cantidad * tasas[opcionOrigen][opcionDestino];
    printf("\n%.2f en la moneda seleccionada equivale a %.2f en la moneda destino.\n", cantidad, resultado);
}

int main() {
    int opcionOrigen, opcionDestino;
    float cantidad;

    printf("Conversor de Monedas (Quetzales, Dólares, Euros)\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares (USD)\n");
    printf("3. Euros (EUR)\n");

    printf("\nSeleccione la moneda de origen (1-3): ");
    scanf("%d", &opcionOrigen);
    printf("Seleccione la moneda de destino (1-3): ");
    scanf("%d", &opcionDestino);
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    if (opcionOrigen < 1 || opcionOrigen > 3 || opcionDestino < 1 || opcionDestino > 3) {
        printf("Opción inválida.\n");
        return 1;
    }

    convertirMoneda(cantidad, opcionOrigen - 1, opcionDestino - 1);
    
    return 0;
}
