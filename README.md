Calculadora de Signo Zodiacal
---
Autor
---
Nombre: Gianfranco Chávez Marchetta

Contacto: gian_chavez@hotmail.com

Fecha de última actualización: 10 de Mayo de 2024

Descripción
---
Este programa en C solicita al usuario su fecha de nacimiento (día y mes) y determina su signo zodiacal según la astrología occidental, específicamente utilizando el Zodiaco Tropical. La información sobre los rangos de fechas de cada signo zodiacal se ha obtenido de la Wikipedia sobre el Zodiaco Occidental. El programa incluye validación de las fechas ingresadas para asegurar su validez antes de proceder con la determinación del signo zodiacal.

Uso
---
El usuario debe ingresar su día y mes de nacimiento como números enteros cuando se le solicite. El programa verificará si los valores ingresados son válidos (días dentro de los rangos convencionales para el mes especificado y meses entre 1 y 12). Si la fecha es inválida, el programa informará al usuario y se cerrará. Si es válida, mostrará el signo zodiacal correspondiente.

Requisitos del Sistema
---
Un compilador de C que soporte C99 o superior (por ejemplo, GCC, Clang).

Acceso a una terminal o prompt de comandos para ejecutar el programa.

Compilación
---
Para compilar este programa, necesitas tener instalado un compilador de C. Utiliza el siguiente comando para compilar el programa:

gcc -o signo_zodiacal main.c

Este comando compilará el código fuente y creará un ejecutable llamado signo_zodiacal.

Ejecución
---
Para ejecutar el programa en un sistema basado en UNIX/Linux o Windows, puedes usar el siguiente comando en la terminal o en el prompt de comandos:

./signo_zodiacal

Sigue las instrucciones en pantalla para ingresar el día y mes de tu nacimiento y obtener tu signo zodiacal.

Características del Programa
---
-	Validación de Entrada: El programa solicita dos números enteros, para día y mes, y verifica estos antes de proceder con la determinación del signo.
-	Cobertura Completa del Zodiaco: El programa incluye todos los signos zodiacales y los intervalos de fechas asociados a cada uno, basados en el sistema del Zodiaco Tropical.
-	Interacción del Usuario: El programa espera que el usuario presione Enter antes de cerrar, lo que permite que los resultados sean revisados sin prisa.
