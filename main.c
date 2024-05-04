/**
 * Nombre del Programa: Calculadora de Secuencia
 * Autor: Gianfranco Chavez Marchetta
 * Contacto: gian_chavez@hotmail.com
 * Fecha de Creación: 2 de Mayo de 2024
 * Fecha de Última Actualización: 4 de Mayo de 2024
 * Versión: 1.0
 *
 * Descripción:
 * Este programa en C calcula y muestra los valores de la secuencia matemática
 * definida por la fórmula (n * (n + 1) * (2n + 1)) / 6 para `n` desde 1 hasta un
 * número `n` proporcionado por el usuario. La secuencia es útil en contextos
 * matemáticos y estadísticos, particularmente en la teoría de números y sumas
 * de cuadrados.
 *
 * Instrucciones:
 * El usuario debe ingresar un número entero positivo, y el programa mostrará
 * los términos de la secuencia hasta ese número. Se valida el ingreso para
 * asegurarse que sea un entero positivo antes de proceder con los cálculos.
 */
#include <stdio.h>

int main() {
    int n, i;

    printf("Calculadora para la secuencia (n*(n + 1)*(2*n + 1))/6\n");
    // Solicita al usuario que ingrese el valor máximo para la secuencia
    printf("Ingresa el valor de n (Entero positivo): ");
    scanf("%d", &n);

    // Verifica si el valor ingresado es válido
    if (n < 1) {
        // Muestra un mensaje de error si el número no es válido
        printf("Error: El valor ingresado es incompatible. Por favor, ingresa un numero entero positivo.\n");
        printf("Presiona ENTER para salir...");
        getchar(); // Limpia el buffer de entrada
        getchar(); // Espera que el usuario presione ENTER
        return 1; // Termina el programa con un código de error
    }

    // Inicia la impresión de la secuencia calculada
    printf("Salida = ");
    for (i = 1; i <= n; i++) {
        // Calcula el término i-ésimo de la secuencia usando la fórmula dada
        long long resultado = (long long)i * (i + 1) * (2 * i + 1) / 6;

        // Imprime el resultado del término actual
        printf("%lld", resultado);

        // Añade una coma después del número, excepto después del último
        if (i < n) {
            printf(", ");
        }
    }
    // Finaliza la línea después de imprimir todos los números
    printf("\n");

    // Espera por entrada del usuario para evitar que el programa se cierre inmediatamente
    printf("Presiona ENTER para salir...");
    getchar(); // Limpia el buffer de entrada
    getchar(); // Espera que el usuario presione ENTER

    return 0; // Termina el programa exitosamente
}