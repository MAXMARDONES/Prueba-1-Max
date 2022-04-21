#include "pregunta_5.h"

//Recibe como argumento un arreglo de empresas, 
//un entero que indica la cantidad de empresas que tiene el arreglo, 
//otro entero que indica la cantidad de empresas que serán ordenados, 
//y un último entero que indica la region social que será usada para obtener las mejores empresas. 
//La función retornará UN NUEVO ARREGLO con las empresas ordenadas de mayor a menor (número más alto primero) según la columna capital, 
//conteniendo sólo las empresas de la región social listada. En caso de empate, ordenar por razón social.

empresa* N_mejores_region(empresa* empresas, int N, int N_resultado, int region) {

    empresa* resultado = (empresa*) malloc(N_resultado * sizeof(empresa));
    for (int i = 0; i < N_resultado; i++) {
        resultado[i] = empresas[i];
    }
    for (int i = 0; i < N_resultado; i++) {
        for (int j = i + 1; j < N_resultado; j++) {
            if (resultado[i].capital < resultado[j].capital) {
                swap(&resultado[i], &resultado[j]);
            } else if (resultado[i].capital == resultado[j].capital) {
                if (strcmp(resultado[i].razon_social, resultado[j].razon_social) > 0) {
                    swap(&resultado[i], &resultado[j]);
                }
            }
        }
    }
    int contador = 0;
    for (int i = 0; i < N_resultado; i++) {
        if (resultado[i].region_social == region) {
            contador++;
        }
    }
    empresa* resultado_final = (empresa*) malloc(contador * sizeof(empresa));
    contador = 0;
    for (int i = 0; i < N_resultado; i++) {
        if (resultado[i].region_social == region) {
            resultado_final[contador] = resultado[i];
            contador++;
        }
    }
    return resultado_final;
    return NULL;
  return NULL;
}