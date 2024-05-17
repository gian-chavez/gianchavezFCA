# Programa de Selección de Paquetes de Comida Rápida

## Información del Programa

**Nombre del Programa:** Selección de Paquetes de Comida Rápida  
**Autor:** Gianfranco Chávez Marchetta  
**Contacto:** gian_chavez@hotmail.com  
**Fecha de Creación:** 15 de Mayo de 2024  
**Fecha de Última Actualización:** 17 de Mayo de 2024  
**Versión:** 1.1  

## Descripción

Este programa en C permite a un usuario seleccionar entre 4 paquetes de comida rápida. El menú se muestra en la consola, y el usuario puede ingresar el número correspondiente al paquete que desea seleccionar. El programa maneja la selección utilizando la estructura `switch-case` y valida la entrada del usuario.

## Instrucciones

El usuario debe ingresar el número correspondiente al paquete de comida rápida que desea seleccionar cuando se le solicite. El programa verificará si el valor ingresado es válido (número entre 1 y 4). Si la entrada no es válida, el programa informará al usuario y solicitará una nueva entrada. Si la entrada es válida, mostrará los detalles del paquete seleccionado, si se encuentra dentro de los paquetes disponibles en el menú, sino pedirá al usuario que ingrese un número de paquete válido. Al finalizar, el programa esperará a que el usuario presione Enter antes de cerrarse.

## Funciones del Programa

### `Menu()`

Muestra el menú de opciones disponibles en la consola.

```c
void Menu() {
    printf("Bienvenido al menú de comida rápida. Por favor, selecciona uno de los siguientes paquetes:\n");
    printf("1. Paquete Hamburguesa\n");
    printf("2. Paquete Pizza\n");
    printf("3. Paquete Tacos\n");
    printf("4. Paquete Sushi\n");
}
```

### `seleccionarPaquete(int opcion)`
Maneja la selección del paquete de comida basado en la opción ingresada por el usuario. Imprime los detalles del paquete seleccionado o un mensaje de error si la opción es inválida.
```c
void seleccionarPaquete(int opcion) {
    switch (opcion) {
        case 1:
            printf("Has seleccionado el Paquete Hamburguesa.\n");
            printf("Incluye: Hamburguesa, papas fritas y refresco.\n");
            break;
        case 2:
            printf("Has seleccionado el Paquete Pizza.\n");
            printf("Incluye: Pizza individual, ensalada y refresco.\n");
            break;
        case 3:
            printf("Has seleccionado el Paquete Tacos.\n");
            printf("Incluye: Tres tacos, guacamole y agua fresca.\n");
            break;
        case 4:
            printf("Has seleccionado el Paquete Sushi.\n");
            printf("Incluye: Rollos de sushi, sopa miso y té verde.\n");
            break;
        default:
            printf("Opción no válida. Por favor, selecciona una opción del 1 al 4.\n");
            break;
    }
}
```

### `main()`
Función principal del programa. Muestra el menú, solicita al usuario que ingrese una opción, y procesa la selección. También maneja la validación de la entrada y la limpieza del buffer de entrada.
```c
int main() {
    int opcion;

    Menu();
    printf("Ingresa el número del paquete que deseas: ");

    if (scanf("%d", &opcion) != 1) {
        printf("Entrada no válida. Por favor, ingresa un número del 1 al 4.\n");
    } else {
        seleccionarPaquete(opcion);
    }

    while (getchar() != '\n');

    printf("Presiona Enter para salir...");
    getchar();

    return 0;
}
```
## Compilación y Ejecución
Para compilar y ejecutar el programa, sigue los siguientes pasos:

- Guarda el código en un archivo llamado menu_comida.c.

- Abre una terminal y navega al directorio donde guardaste el archivo.

- Compila el programa utilizando gcc (o cualquier otro compilador de C):

      gcc main.c -o menu_comida
- Ejecuta el programa compilado:

        ./menu_comida

## Uso
- El programa mostrará el menú de paquetes de comida rápida.
- Ingresa el número correspondiente al paquete que deseas seleccionar (1-4).
- El programa mostrará los detalles del paquete seleccionado o un mensaje de error si la opción es inválida.
- Presiona Enter para salir del programa.

## Notas
- Asegúrate de ingresar un número del 1 al 4 para seleccionar un paquete válido.
- El programa espera que el usuario presione Enter antes de cerrar, permitiendo al usuario ver el resultado antes de que la consola se cierre.

## Ejemplo de Ejecución

Bienvenido al menú de comida rápida. Por favor, selecciona uno de los siguientes paquetes:
1. Paquete Hamburguesa
2. Paquete Pizza
3. Paquete Tacos
4. Paquete Sushi

Ingresa el número del paquete que deseas: 2

Has seleccionado el Paquete Pizza.

Incluye: Pizza individual, ensalada y refresco.

Presiona Enter para salir...