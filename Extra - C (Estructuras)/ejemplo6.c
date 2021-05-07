#include <stdio.h>
#include <string.h>

struct Voltaje {
    int corriente;
    int resistencia;
    int volt;
};

void obtenervoltaje(int cantidad, struct Voltaje v);

int main(){
    int cantidad;
    printf("Ingrese cuantos voltajes ingresará al reporte: ");
    scanf("%d", &cantidad);
    prinf("\n");
    struct Voltaje voltajes;
    obtenervoltaje(cantidad, voltajes);

    return 0;
}

void obtenervoltaje(int cantidad, struct Voltaje v[]){
    for (int i = 0; i < cantidad; i ++){
        int nueva_resistencia;
        int nueva_corriente;
        printf("Ingrese la corriente %d: ", i);
    }
}

