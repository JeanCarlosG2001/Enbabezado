#include "funciones.h"

void calcularPagosCredito(float montoCredito, float tasaInteresAnual, int tiempo) {
    printf("\nDetalle de pagos por mes:\n");
    printf("Mes\tCapital Restante\tInteres Mensual\tCuota Mensual\n");
    float capitalRestante = montoCredito;
    float totalInteresPagado = 0;


    for (int i = 1; i <= tiempo * 12; i++) {
        float tasaInteresMensual = tasaInteresAnual / 12 / 100;
        int numeroMeses = tiempo * 12;
        float cuotaMensual = montoCredito * (tasaInteresMensual * pow((1 + tasaInteresMensual), numeroMeses)) / (pow((1 + tasaInteresMensual), numeroMeses) - 1);
        float interesMensual = capitalRestante * tasaInteresMensual;

        capitalRestante -= cuotaMensual - interesMensual;
        totalInteresPagado += interesMensual;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", i, capitalRestante, interesMensual, cuotaMensual);
    }

    printf("\nMonto total pagado en intereses: %.2f\n", totalInteresPagado);

}
