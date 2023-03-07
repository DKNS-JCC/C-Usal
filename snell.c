#include <stdio.h>
#include <math.h>
#define M_PI 3.141615

int main() {
    float angulo_incidente, indice_refraccion_1, indice_refraccion_2, angulo_refractado, angulo_critico;

    // Pedir los valores de entrada
    printf("Introduzca el ángulo de incidencia en grados: ");
    scanf("%f", &angulo_incidente);
    printf("Introduzca el índice de refracción del primer medio: ");
    scanf("%f", &indice_refraccion_1);
    printf("Introduzca el índice de refracción del segundo medio: ");
    scanf("%f", &indice_refraccion_2);

    // Convertir el ángulo de incidencia a radianes
    float angulo_rad = angulo_incidente * M_PI / 180.0;

    // Calcular el ángulo crítico
    angulo_critico = asin(indice_refraccion_2 / indice_refraccion_1);

    // Comprobar si se produce reflexión total
    if (angulo_rad > angulo_critico) {
        printf("Se produce reflexión total.\n");
    } else {
        // Calcular el ángulo de refracción usando la ley de Snell
        angulo_refractado = asin((indice_refraccion_1 / indice_refraccion_2) * sin(angulo_rad));

        // Convertir el ángulo de refracción a grados
        float angulo_refractado_grados = angulo_refractado * 180.0 / M_PI;

        // Mostrar el resultado
        printf("El ángulo de refracción es: %.2f grados\n", angulo_refractado_grados);
    }

    return 0;
}
