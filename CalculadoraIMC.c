#include <stdio.h>

// Función para imprimir el tipo de IMC de acuerdo con https://www.cdc.gov/healthyweight/spanish/assessing/index.html
// @param imc: El índice de masa corporal a evaluar calculado en main()
void imc_tipo(float imc) {
    if (imc < 18.5) {
        printf("Peso insuficiente\n");
    } else if (imc < 25) {
        printf("Peso saludable\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }
}

// Función para imprimir el rango de peso recomendado basado en la altura y de acuerdo al CDC
// @param altura: La altura de la persona en centímetros introducido por el usuario en main()
void peso_recomendado(float altura) {
    // Variables para almacenar el peso mínimo en kg/m^2 y máximo recomendado en kg/m^2
    float min_peso, max_peso;
    // Calculamos el peso mínimo y máximo recomendado ajustado para la fórmula de altura en centímetros
    min_peso = 18.5 * altura/100 * altura/100;
    max_peso = 24.99 * altura/100 * altura/100;
    printf("Tu peso recomendado de acuerdo con tu altura es entre %.0f y %.0f kg\n", min_peso, max_peso);
}

// Función principal
int main() {
    // Variables para almacenar el peso en kg, la altura en cm y el IMC en kg/m^2
    float peso, altura, imc;
    printf("Calculadora de IMC (Indice de Masa Corporal)\n");
    printf("Introduce tu peso en kilogramos: "); //Valor debe ser positivo y mayor a 0
    // Leemos el peso del usuario
    scanf("%f", &peso);

    // Verificamos si la entrada es válida
    if (peso == 0 || peso <= 0) {
        printf("Error: Debes introducir un numero valido y positivo para el peso.\n");
        return 1; // Terminamos el programa con un código de error
    }

    printf("Introduce tu altura en centimetros: "); // Valor debe ser positivo y mayor a 0
    // Leemos la altura del usuario
    scanf("%f", &altura);

    // Verificamos si la entrada es válida
    if (altura == 0 || altura <= 0) {
        printf("Error: Debes introducir un numero valido y positivo para la altura.\n");
        return 1; // Terminamos el programa con un código de error
    }

    // Calculamos el IMC ajustado para la fórmula de altura en centímetros
    imc = peso / (altura/100 * altura/100);
    printf("Tu IMC es %.1f\n", imc);

    // Llamamos a la función para imprimir el tipo de IMC
    imc_tipo(imc);

    // Llamamos a la función para imprimir el rango de peso recomendado
    peso_recomendado(altura);

    // Mensaje para cerrar el programa y previene que se cierre automáticamente
    printf("Por favor presiona Enter para cerrar el programa.\n");
    getchar();
    getchar();

    return 0;
}