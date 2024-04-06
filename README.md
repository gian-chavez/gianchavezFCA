# "Documentación de la Calculadora de IMC"
Nombre del programa:

Calculadora de Índice de Masa Corporal

Nombre del programador:

Gianfranco Chavez Marchetta

Resumen o Introducción:

Este documento describe el programa de la Calculadora de Índice de Masa Corporal (IMC), diseñado para calcular el IMC de un usuario y proporcionar una recomendación de peso basada en su altura. El programa sigue las directrices del Centro para el Control y la Prevención de Enfermedades (CDC) para determinar las categorías de IMC (https://www.cdc.gov/healthyweight/spanish/assessing/index.html).

Requisitos:

Sistema Operativo: Windows.
No se requieren instalaciones de software adicionales para ejecutar el archivo .exe.

Estructura del Programa:

El programa consta de una función principal (main()) y dos funciones auxiliares (imc_tipo(float imc) y peso_recomendado(float altura)), que trabajan conjuntamente para calcular el IMC del usuario, determinar su categoría de IMC, y sugerir un rango de peso saludable.

Descripción de Funciones:

- main(): Captura el peso y la altura del usuario, calcula el IMC, e invoca las otras dos funciones para mostrar los resultados.
- imc_tipo(float imc): Basado en el IMC calculado, imprime la categoría correspondiente de IMC.
- peso_recomendado(float altura): Calcula y muestra el rango de peso saludable basado en la altura del usuario.

Compilación del Programa:

La compilación del programa se realiza mediante un compilador de C, se utilizó el compilador de CLion así como el de GitHub codespace.

Requisitos para el Uso del Programa de la Calculadora de IMC:

Para utilizar el programa de la Calculadora de IMC de manera efectiva, es esencial que los usuarios estén conscientes de los siguientes requisitos y consideraciones:

Sistema Operativo y Hardware:
Sistema Operativo: Windows. Aunque el programa genera un archivo .exe, se presupone su uso en el entorno de Windows.
Hardware: No se necesitan especificaciones de hardware particulares más allá de las básicas para ejecutar el sistema operativo y programas en consola.

Conocimientos Previos:
No se requieren conocimientos previos de programación o informática para utilizar el programa. Sin embargo, el usuario debe estar familiarizado con operaciones básicas de su sistema operativo, como navegar por el sistema de archivos y abrir un terminal o Símbolo del sistema.

Datos de Entrada Necesarios para el Uso del Programa:
Peso: El usuario debe conocer su peso en kilogramos (kg). Es importante utilizar kilogramos para la entrada, ya que el cálculo del IMC se basa en esta unidad.
Altura: La altura del usuario debe ser conocida en centímetros (cm). Al igual que con el peso, es crucial ingresar la altura en centímetros para asegurar la precisión del cálculo del IMC.

Entrada de Datos
Durante la ejecución del programa, se solicitará al usuario que introduzca su peso y altura utilizando el teclado. Las entradas deben ser numéricas y pueden incluir decimales (por ejemplo, 68.5 para el peso y 172.4 para la altura).

Ejecución del Programa:

Para ejecutar el programa, sigue estos pasos:

Navega hasta el directorio que contiene el archivo calculadoraIMC.exe.
Abre el Símbolo del sistema o PowerShell en este directorio.
Escribe ./calculadoraIMC.exe y presiona Enter.
Sigue las instrucciones en pantalla para introducir tu peso y altura.

O haz doble click sobre el ejecutable de CalculadoraIMC.exe

Consideraciones Adicionales
Asegúrese de que el entorno en el que se ejecuta el programa (como el Símbolo del sistema o PowerShell en Windows) esté configurado para soportar la entrada y visualización de caracteres numéricos y decimales correctamente.
Antes de comenzar, verifique que el archivo .exe se encuentre en un directorio accesible y que tenga los permisos necesarios para ejecutarlo.

Descripción de los Datos de Entrada y Salida
Para garantizar una interacción eficiente con el programa de la Calculadora de IMC, es importante entender claramente la naturaleza de los datos de entrada requeridos por el programa, así como la salida que el usuario puede esperar como resultado. A continuación se detallan estos aspectos:

Datos de Entrada.

Peso (en kilogramos):

Tipo de dato: Numérico, acepta valores decimales.
Descripción: El peso del usuario debe ser ingresado en kilogramos. Este dato es esencial para calcular el Índice de Masa Corporal (IMC). El usuario debe asegurarse de proporcionar un valor preciso y actual para obtener resultados fiables.
Ejemplo: 70, 82.5

Altura (en centímetros):

Tipo de dato: Numérico, acepta valores decimales.
Descripción: La altura del usuario debe ser ingresada en centímetros. Este valor es utilizado junto con el peso para calcular el IMC. La precisión es clave, ya que pequeñas variaciones en la altura pueden afectar significativamente el cálculo del IMC.
Ejemplo: 175, 160.2

Datos de Salida.

Índice de Masa Corporal (IMC):

Tipo de dato: Numérico, generalmente presentado con un decimal.
Descripción: El IMC se calcula usando la fórmula IMC = peso (kg) / (altura (m))^2. Esta métrica es un indicador del estatus de peso respecto a la altura del individuo, proporcionando una clasificación general del peso (por ejemplo, bajo peso, peso normal, sobrepeso, obesidad).
Ejemplo: 22.9

Categoría de IMC:

Tipo de dato: Texto.
Descripción: Basado en el valor calculado del IMC, el programa clasifica al usuario en una de varias categorías de peso: "Peso insuficiente", "Peso saludable", "Sobrepeso", "Obesidad". Esta clasificación ayuda a los usuarios a entender su estado de peso en relación con los estándares de salud establecidos.
Ejemplo: Peso saludable

Rango de Peso Recomendado:

Tipo de dato: Texto, con valores numéricos incluidos.
Descripción: Utilizando la altura del usuario, el programa calcula y proporciona un rango de peso recomendado para mantener un estatus de "Peso saludable" según las directrices del IMC. Este rango es útil para establecer metas de peso personalizadas.
Ejemplo: "Tu peso recomendado de acuerdo con tu altura es entre 56 y 74 kg."

Ejemplo de Uso:

Supongamos que un usuario desea calcular su IMC y conocer el rango de peso recomendado basado en su altura. El usuario pesa 70 kg y mide 175 cm.

- Inicio del Programa: El programa inicia y muestra el mensaje: "Calculadora de IMC (Índice de Masa Corporal)".
- Ingreso de Datos: El programa solicita al usuario que introduzca su peso en kilogramos: El usuario escribe 70 y presiona Enter.
    - A continuación, el programa solicita al usuario que introduzca su altura en centímetros: El usuario escribe 175 y presiona Enter.
- Resultados: El programa calcula el IMC y muestra: "Tu IMC es 22.9", clasificándolo como "Peso saludable". Luego, calcula y muestra el rango de peso recomendado: "Tu peso recomendado de acuerdo con tu altura es entre 56 y 74 kg".

Posibles Problemas y Soluciones:

Problema: Entrada Incorrecta del Usuario
Descripción: El programa espera que el usuario ingrese números, pero el usuario introduce texto o caracteres inválidos, causando un error.
Solución: Antes de ejecutar el programa, recuerde que solo debe ingresar números válidos para el peso y la altura (Positivos y diferentes a 0). Si el programa se detiene o no funciona correctamente después de una entrada inválida, reinícielo y pruebe nuevamente con datos apropiados.

Conclusión:

El programa de la Calculadora de IMC es una herramienta útil que no solo permite a los usuarios calcular su Índice de Masa Corporal de manera rápida y eficiente, sino que también proporciona información valiosa sobre el rango de peso saludable basado en su altura. Este conocimiento puede motivar a los individuos a mantener un estilo de vida saludable y tomar decisiones informadas sobre su dieta y ejercicio.

Aunque su uso es sencillo, los usuarios deben asegurarse de ingresar datos válidos y seguir las instrucciones correctamente para evitar errores. Además, este programa demuestra los principios básicos de programación en C, incluyendo el uso de condicionales, entrada/salida estándar, y funciones, lo que lo hace no solo una herramienta útil para usuarios finales sino también un excelente proyecto de aprendizaje para programadores principiantes.