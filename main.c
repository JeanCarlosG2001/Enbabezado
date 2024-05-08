#include "funciones.h"

int main (int argc, char *argv[]) {
    float montoCredito, tasaInteresAnual;
    int tiempo;

    printf("Simulador de Credito\n");
    printf("Ingrese el monto del credito: ");
    scanf("%f", &montoCredito);
    printf("Ingrese la tasa de interes anual (%%): ");
    scanf("%f", &tasaInteresAnual);
    printf("Ingrese el numero de años: ");
    scanf("%d", &tiempo);

    calcularPagosCredito(montoCredito, tasaInteresAnual, tiempo);

    return 0;
}
