Programa de Ordenamiento de Números
---
Descripción
---
Este programa en C solicita al usuario que ingrese tres números enteros, con la condición de que deben estar en el rango de 4 a 14. Una vez ingresados, el programa verifica si los números están dentro del rango permitido. Si alguno de los números no cumple con este criterio, se muestra un mensaje de error y se solicita al usuario que salga del programa. Si los números están dentro del rango permitido, se ordenan de mayor a menor utilizando el algoritmo de ordenamiento de burbuja (Bubble Sort) y se muestran en la consola.

Compilación y Ejecución
---
Para compilar y ejecutar este programa, necesitará un compilador de C como GCC. Puede seguir los siguientes pasos:

Compilación:
---
Abra una terminal y navegue hasta el directorio donde se encuentra el archivo fuente. Compile el código utilizando el siguiente comando:

gcc -o programa_ordenamiento main.c

Ejecución:
---
Para ejecutar el programa compilado, utilice el comando:

./programa_ordenamiento

Entrada de Usuario
---
El usuario debe ingresar tres números enteros cuando se le solicite. Estos números deben estar separados por espacios y deben cumplir con los siguientes criterios:

Ser mayores que 3 y menores que 15.

Ejemplo de entrada válida:
---
10 12 8

Salida Esperada
---
Después de ingresar los números correctamente y validar que están dentro del rango permitido, el programa ordenará y mostrará los números de mayor a menor. Si los números no están dentro del rango, se mostrará un mensaje de error y se pedirá al usuario que cierre el programa.

Ejemplo de salida para una entrada válida:
---
Los números ordenados de mayor a menor son: 12, 10, 8

Manejo de Errores
---
Si los números ingresados no cumplen con el rango especificado, el programa mostrará el siguiente mensaje:

Error: Todos los números deben ser mayores a 3 y menores a 15 (4 -> 14).

Por favor, intente nuevamente.

Presione Enter para salir...

El programa entonces solicitará al usuario que presione Enter para salir.