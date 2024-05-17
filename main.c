/**
 * Nombre del Programa: Selección de Paquetes de Comida Rápida
 * Autor: Gianfranco Chávez Marchetta
 * Contacto: gian_chavez@hotmail.com
 * Fecha de Creación: 15 de Mayo de 2024
 * Fecha de Última Actualización: 17 de Mayo de 2024
 * Versión: 1.1
 *
 * Descripción:
 * Este programa en C permite a un usuario seleccionar entre 4 paquetes de comida rápida.
 * El menú se muestra en la consola, y el usuario puede ingresar el número correspondiente
 * al paquete que desea seleccionar. El programa maneja la selección utilizando la estructura
 * `switch-case` y valida la entrada del usuario.
 *
 * Instrucciones:
 * El usuario debe ingresar el número correspondiente al paquete de comida rápida que desea seleccionar
 * cuando se le solicite. El programa verificará si el valor ingresado es válido (número entre 1 y 4).
 * Si la entrada no es válida, el programa informará al usuario y solicitará una nueva entrada. Si la entrada
 * es válida, mostrará los detalles del paquete seleccionado, si se encuentra dentro de los paquetes disponibles
 * en el menú, sino pedirá al usuario que ingrese un número de paquete válido. Al finalizar, el programa esperará a que el
 * usuario presione Enter antes de cerrarse.
 */
#include <stdio.h>

// Función para mostrar el menú de paquetes de comida rápida
void Menu() {
    printf("Bienvenido al menu de comida rapida. Por favor, selecciona uno de los siguientes paquetes:\n");
    printf("1. Paquete Hamburguesa\n");
    printf("2. Paquete Pizza\n");
    printf("3. Paquete Tacos\n");
    printf("4. Paquete Sushi\n");
}

// Función para manejar la selección del paquete de comida
// Recibe como input la opción seleccionada por el usuario
void seleccionarPaquete(int opcion) {
    switch (opcion) {
        case 1:
            // Mensaje y detalles del Paquete Hamburguesa
            printf("Has seleccionado el Paquete Hamburguesa.\n");
            printf("Incluye: Hamburguesa, papas fritas y refresco.\n");
            break;
        case 2:
            // Mensaje y detalles del Paquete Pizza
            printf("Has seleccionado el Paquete Pizza.\n");
            printf("Incluye: Pizza individual, ensalada y refresco.\n");
            break;
        case 3:
            // Mensaje y detalles del Paquete Tacos
            printf("Has seleccionado el Paquete Tacos.\n");
            printf("Incluye: Tres tacos, guacamole y agua fresca.\n");
            break;
        case 4:
            // Mensaje y detalles del Paquete Sushi
            printf("Has seleccionado el Paquete Sushi.\n");
            printf("Incluye: Rollos de sushi, sopa miso y te verde.\n");
            break;
        default:
            // Mensaje de error para opciones no válidas, fuera del rango 1-4
            printf("Opcion no valida. Por favor, selecciona una opcion del 1 al 4.\n");
            break;
    }
}

// Función principal del programa
int main() {
    int opcion;

    // Mostrar el menú de paquetes de comida rápida
    Menu();
    printf("Ingresa el numero del paquete que deseas: ");

    // Leer la opción seleccionada por el usuario
    if (scanf("%d", &opcion) != 1) {
        // Mensaje de error si la entrada no es un número
        printf("Entrada no valida. Por favor, ingresa un numero del 1 al 4.\n");
    } else {
        // Procesar la selección del paquete
        seleccionarPaquete(opcion);
    }

    // Limpiar el buffer de entrada para eliminar caracteres sobrantes
    while (getchar() != '\n');

    // Esperar a que el usuario presione Enter antes de salir
    printf("Presiona Enter para salir...");
    getchar();

    return 0;
}