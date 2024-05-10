/**
 * Nombre del Programa: Calculadora de Signo Zodiacal
 * Autor: Gianfranco Chavez Marchetta
 * Contacto: gian_chavez@hotmail.com
 * Fecha de Creación: 08 de Mayo de 2024
 * Fecha de Última Actualización: 10 de Mayo de 2024
 * Versión: 1.1
 *
 * Descripción:
 * Este programa en C solicita al usuario su fecha de nacimiento (día y mes) y
 * determina su signo zodiacal según la astrología occidental, utilizando el Zodiaco Tropical.
 * La información sobre los rangos de fechas de cada signo zodiacal se ha obtenido de
 * "https://es.wikipedia.org/wiki/Zodiaco_occidental". El programa incluye validación para
 * asegurar que las entradas de día y mes sean válidas antes de proceder con la determinación
 * del signo zodiacal. Es útil para aquellos interesados en conocer su signo zodiacal de manera
 * precisa.
 *
 * Instrucciones:
 * El usuario debe ingresar su día y mes de nacimiento como números enteros cuando
 * se le solicite. El programa verificará si los valores ingresados son válidos
 * (días dentro de los rangos convencionales para el mes especificado y meses entre 1 y 12).
 * Si la fecha es inválida, el programa informará al usuario y se cerrará. Si es válida,
 * mostrará el signo zodiacal correspondiente.
 */
#include <stdio.h>

int main() {
    int dia, mes;

    // Solicitar al usuario su fecha de nacimiento
    printf("Introduce el dia de nacimiento (formato: DD): ");
    scanf("%d", &dia);
    printf("Introduce el mes de nacimiento (formato: MM): ");
    scanf("%d", &mes);

    // Limpiar el buffer de entrada (necesario tras usar scanf antes de getchar)
    while (getchar() != '\n');

    // Verificar si el mes es válido
    if (mes < 1 || mes > 12) {
        printf("Has introducido un mes invalido. Por favor, ejecuta el programa nuevamente con un mes valido (01-12).\n");
    } else {
        // Verificar si el día es válido dependiendo del mes
        int diaValido = 0;
        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                diaValido = (dia >= 1 && dia <= 31);
                break;
            case 4: case 6: case 9: case 11:
                diaValido = (dia >= 1 && dia <= 30);
                break;
            case 2:
                diaValido = (dia >= 1 && dia <= 29); // Asumimos que podría ser un año bisiesto
                break;
        }

        if (!diaValido) {
            printf("Has introducido un dia invalido para el mes dado. Por favor, ejecuta el programa nuevamente con un dia valido.\n");
        } else {
            // Determinar el signo zodiacal basado en el mes y el día
            if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)) {
                printf("Tu signo zodiacal es Aries.\n");
            } else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)) {
                printf("Tu signo zodiacal es Tauro.\n");
            } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
                printf("Tu signo zodiacal es Geminis.\n");
            } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
                printf("Tu signo zodiacal es Cancer.\n");
            } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 23)) {
                printf("Tu signo zodiacal es Leo.\n");
            } else if ((mes == 8 && dia >= 24) || (mes == 9 && dia <= 22)) {
                printf("Tu signo zodiacal es Virgo.\n");
            } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 23)) {
                printf("Tu signo zodiacal es Libra.\n");
            } else if ((mes == 10 && dia >= 24) || (mes == 11 && dia <= 22)) {
                printf("Tu signo zodiacal es Escorpio.\n");
            } else if ((mes == 11 && dia >= 23) || (mes == 12 && dia <= 21)) {
                printf("Tu signo zodiacal es Sagitario.\n");
            } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20)) {
                printf("Tu signo zodiacal es Capricornio.\n");
            } else if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)) {
                printf("Tu signo zodiacal es Acuario.\n");
            } else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)) {
                printf("Tu signo zodiacal es Piscis.\n");
            }

            // Esperar que el usuario presione Enter antes de cerrar el programa
            printf("Presiona Enter para cerrar el programa...");
            getchar();
        }
    }
}