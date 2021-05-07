#include <stdio.h>

int main(){
    int desicion = 1; // SI = 1 | NO = 0
    int operador = 0; // SUMA = 1 | RESTA = 2 | MULTIPLICACION = 3 | DIVISION = 4
    int num1 = 0; // Guardamos el valor del numero 1
    int num2 = 0; // Guardamos el valor del numero 2
    int resultado = 0; // Guardamos el valor del resultado
    while (desicion != 0){
        printf("========== CALCULADORA ==========\n");
        printf("Ingrese el tipo de operación (SUMA = 1 | RESTA = 2 | MULTIPLICACION = 3 | DIVISION = 4): ");
        scanf("%d", &operador);
        printf("\n");
        printf("Ingrese el primer numero: ");
        scanf("%d", &num1);
        printf("\n"); 
        printf("Ingrese el segundo numero: ");
        scanf("%d", &num2); 
        printf("\n");
        // Validamos el tipo de operacion que el usuario quiere realizar
        switch (operador){
            case 1: // SI ESCOGIO UNA SUMA
                resultado = num1 + num2;
                break;
            case 2: // SI ESCOGIO UNA RESTA
                resultado = num1 - num2;
                break;
            case 3: // SI ESCOGIO UNA MULTIPLICACION
                resultado = num1 * num2;
                break;
            case 4: // SI ESCOGIO UNA DIVISION
                resultado = num1 / num2;
                break;
        }
        printf("El resultado de la operacion es: ");
        printf("%d", resultado);
        printf("\n");
        printf("¿Desea realizar otra operación? (SI = 1 | NO = 0): ");
        scanf("%d", &desicion);
        // DESICION ES O ES 1
    }
    printf("GRACIAS POR TODO, ADIOS");
    return 0;
}