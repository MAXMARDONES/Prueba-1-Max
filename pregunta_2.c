#include "pregunta_2.h"

//Función que recibe como argumento el nombre de un archivo y un puntero a entero, 
//y retorna un arreglo con todas las empresas del archivo guardadas en él. 
//Además guarda en el puntero a entero la cantidad de empresas leídas del archivo.      
empresa* leer_archivo(char* nombre_archivo, int* N) {
    FILE* archivo = fopen(nombre_archivo, "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return NULL;
    }
    int cantidad_empresas = 0;
    fscanf(archivo, "%d", &cantidad_empresas);
    empresa* empresas = (empresa*) malloc(cantidad_empresas * sizeof(empresa));
    for (int i = 0; i < cantidad_empresas; i++) {
        fscanf(archivo, "%d", &empresas[i].id);
        fscanf(archivo, "%s", empresas[i].rut);
        fscanf(archivo, "%s", empresas[i].razon_social);
        fscanf(archivo, "%s", empresas[i].fecha_actuacion);
        fscanf(archivo, "%s", empresas[i].fecha_registro);
        fscanf(archivo, "%s", empresas[i].fecha_aprobacion);
        fscanf(archivo, "%d", &empresas[i].anio);
        fscanf(archivo, "%s", empresas[i].mes);
        fscanf(archivo, "%s", empresas[i].comuna);
        fscanf(archivo, "%d", &empresas[i].region);
        fscanf(archivo, "%s", empresas[i].codigo);
        fscanf(archivo, "%s", empresas[i].tipo);
        fscanf(archivo, "%d", &empresas[i].capital);
        fscanf(archivo, "%s", empresas[i].comuna_social);
        fscanf(archivo, "%d", &empresas[i].region_social);
    } 
    fclose(archivo);
    *N = cantidad_empresas;
    return empresas;
}
