#include <stdio.h>

int main(){
    FILE * archivo;
    archivo = fopen("reporte.html","w");
    if (archivo == NULL){
        printf("Error al crear el reporte html\n");
        return 0;
    }
    char html[] = "<!DOCTYPE html><head><title>REPORTE</title></head><body><center> <table border=\"1\"><tr><th>VOLTAJE</th><th>CORRIENTE</th></tr><tr><td>23</td><td>50</td></tr><tr><td>30</td><td>40</td></tr></table> </center></body></html>";
    printf("Reporte html creado exitosamente\n");
    fputs(html, archivo);
    fclose(archivo);
    return 0;
}