#include "pregunta_4.h"

//Recibe como argumento un arreglo de empresas,  
//un entero que indica la cantidad de empresas que tiene el arreglo, 
//y otro entero que indica la cantidad de empresas que serán ordenadas. 
//La función retornará UN NUEVO ARREGLO con las empresas ordenadas de mayor a menor (número más alto primero) según la columna capital. 
//En caso de empate, ordenar por razon social.

empresa* N_mejores(empresa* empresas, int N, int N_resultado) {
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
            } else if (resultado[i].capital == resultado[j].capital) {
                if (strcmp(resultado[i].razon_social, resultado[j].razon_social) > 0) {
                    swap(&resultado[i], &resultado[j]);
                }
            }
        }
    }
    return resultado;
  return NULL;
}
