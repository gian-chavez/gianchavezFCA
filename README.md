# Programa para Sumar los Primeros n Números Pares

## Información del Programa

**Nombre del Programa:** Suma de los Primeros n Números Pares  
**Autor:** Gianfranco Chávez Marchetta  
**Contacto:** gian_chavez@hotmail.com  
**Fecha de Creación:** 16 de Mayo de 2024  
**Fecha de Última Actualización:** 17 de Mayo de 2024  
**Versión:** 1.0  

## Descripción

Este programa en C permite sumar los primeros `n` números pares indicados por el usuario. El usuario debe ingresar un número entero positivo `n`, y el programa mostrará la suma acumulativa de los primeros `n` números pares.

## Instrucciones

El usuario debe ingresar un número entero positivo `n` cuando se le solicite. El programa verificará si el valor ingresado es válido (número mayor que 0). Si la entrada no es válida, el programa informará al usuario y finalizará. Si la entrada es válida, mostrará la suma acumulativa de los primeros `n` números pares. Cada paso de la suma acumulativa se mostrará en la consola.

## Funciones del Programa

### `main()`

Función principal del programa. Muestra el título y la descripción del programa, solicita al usuario que ingrese el valor de `n`, y procesa la suma acumulativa de los primeros `n` números pares. También maneja la validación de la entrada y la limpieza del buffer de entrada.

```c
#include <stdio.h>

int main() {
    long long n, i;
    long long suma = 0;

    // Título del programa
    printf("Programa para sumar los primeros n numeros pares\n");
    printf("-------------------------------------------------\n");

    // Explicación del programa
    printf("Este programa permite sumar los primeros n numeros pares indicados por el usuario.\n");
    printf("El usuario debe ingresar un numero entero positivo n, y el programa mostrara\n");
    printf("la suma acumulativa de los primeros n numeros pares.\n\n");

    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese un numero entero positivo n: ");

    // Leer la entrada y validar que sea un número entero positivo
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("El valor ingresado no es valido. Ingresa un numero entero positivo. \n");
        // Limpiar el buffer de entrada
        while (getchar() != '\n');
        printf("Presione Enter para salir...");
        getchar();
        return 1;
    }

    // Calcular y mostrar la suma acumulativa de los primeros n números pares
    for (i = 1; i <= n; i++) {
        suma += i * 2; // Sumar el i-ésimo número par (2*i) a la suma acumulativa
        printf("Para n = %lld, Suma = %lld.\n", i, suma);
    }

    // Esperar a que el usuario presione Enter antes de cerrar
    printf("Presione Enter para salir...");
    while (getchar() != '\n'); // Limpiar el buffer de entrada
    getchar();

    return 0;
}
```

## Compilación y Ejecución
Para compilar y ejecutar el programa, sigue los siguientes pasos:

- Guarda el código en un archivo llamado main.c.

- Abre una terminal y navega al directorio donde guardaste el archivo.

- Compila el programa utilizando gcc (o cualquier otro compilador de C):

      gcc main.c -o suma_pares
- Ejecuta el programa compilado:

        ./suma_pares

## Uso
- El programa mostrará el título y la descripción.
- Ingresa un número entero positivo n cuando se te solicite.
- El programa calculará y mostrará la suma acumulativa de los primeros n números pares.
- Presiona Enter para salir del programa.

## Notas
- Asegúrate de ingresar un número entero positivo para obtener un resultado válido.
- El programa espera que el usuario presione Enter antes de cerrar, permitiendo al usuario ver el resultado antes de que la consola se cierre.

## Ejemplo de Ejecución

Programa para sumar los primeros n numeros pares
-------------------------------------------------
Este programa permite sumar los primeros n numeros pares indicados por el usuario.
El usuario debe ingresar un numero entero positivo n, y el programa mostrara
la suma acumulativa de los primeros n numeros pares.

Ingrese un numero entero positivo n: 3
Para n = 1, Suma = 2.
Para n = 2, Suma = 6.
Para n = 3, Suma = 12.
Presione Enter para salir...