/**
 * Nombre del Programa: Ordenamiento de Números
 * Autor: Gianfranco Chávez Marchetta
 * Contacto: gian_chavez@hotmail.com
 * Fecha de Creación: 08 de Mayo de 2024
 * Fecha de Última Actualización: 10 de Mayo de 2024
 * Versión: 1.0
 *
 * Descripción:
 * Este programa en C solicita al usuario que ingrese tres números enteros,
 * con la condición de que deben estar en el rango de 4 a 14. Una vez ingresados,
 * el programa verifica si los números están dentro del rango permitido. Si alguno
 * de los números no cumple con este criterio, se muestra un mensaje de error y se
 * solicita al usuario que salga del programa. Si los números están dentro del rango
 * permitido, se ordenan de mayor a menor utilizando el algoritmo de ordenamiento de
 * burbuja (Bubble Sort) y se muestran en la consola.
 *
 * Instrucciones:
 * El usuario debe ingresar tres números enteros cuando se le solicite. Estos números
 * deben estar separados por espacios y deben cumplir con los siguientes criterios:
 * - Ser mayores que 3 y menores que 15.
 * Si los números ingresados no están dentro del rango especificado, el programa mostrará
 * un mensaje de error y se pedirá al usuario que cierre el programa. Si los números son
 * válidos, el programa procederá a ordenarlos de mayor a menor y mostrará el resultado en la consola.
 */
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Solicitar tres números al usuario, explicando el formato de entrada
    printf("Ingrese tres numeros enteros, separados por espacios, deben ser mayores de 3 y menores de 15: \n");
    printf("Ejemplo de entrada: 10 12 8\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Limpiar el buffer de entrada. Esto es necesario porque scanf deja el carácter de nueva línea en el buffer
    getchar();

    // Validar que los números estén dentro del rango permitido
    if ((num1 <= 3 || num1 >= 15) || (num2 <= 3 || num2 >= 15) || (num3 <= 3 || num3 >= 15)) {
        printf("Error: Todos los numeros deben ser mayores a 3 y menores a 15 (4 -> 14).\nPor favor, intente nuevamente.\n");
        printf("Presione Enter para salir...");
        getchar(); // Esperar a que el usuario presione Enter antes de cerrar el programa
        return 1; // Termina el programa con un código de error
    }

    int temp;

    // Ordenar los números usando el método de la burbuja (Bubble Sort)
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 < num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // Imprimir los números ordenados de mayor a menor
    printf("Los numeros ordenados de mayor a menor son: %d, %d, %d\n", num1, num2, num3);

    // Esperar a que el usuario presione Enter antes de cerrar el programa
    printf("Presione Enter para salir...");
    getchar();

    return 0;
}