#include <stdio.h>

// DECLARACION DE FUNCIONES
void mostrarnumero(int b);

int main(){
    int a = 0;
    printf("Ingrese el valor: ");
    scanf("%d", &a);
    printf("\n");
    // EL LLAMADO DE FUNCIONES
    mostrarnumero(a);
    return 0;
}

// DEFINICION DE FUNCIONES
void mostrarnumero(int b){  
    b = b + 10;  
    printf("%d", b);
}