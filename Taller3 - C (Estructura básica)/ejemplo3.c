#include <stdio.h>

int main(){
    int num = 1;
    printf("AQUI EMPIEZA EL IF");
    printf("\n");
    if (num == 1){
        printf("El valor es 1");
    } else if (num == 2){
        printf("El valor es 2");
    } else if (num == 0){
        printf("El valor es 0");
    }
    printf("\n");
    printf("AQUI EMPIEZA EL SWITCH");
    printf("\n");
    switch (num) {
        case 1:
            printf("El valor es 1");
        break;
        case 2:
            printf("El valor es 2");
        break;
        case 0:
            printf("El valor es 0");
        break;
    }  
    return 0;
}