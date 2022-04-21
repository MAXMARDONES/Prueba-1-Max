#include "pregunta_3.h"

//Recibe como argumento un arreglo de empresas, 
//y un entero que indica la cantidad de empresas que tiene el arreglo. 
//La función retornará UN NUEVO ARREGLO con las empresas ordenadas de mayor a menor (número más alto primero) según la columna capital. 
//En caso de empate, ordenar por razón social.


empresa* ordenar_empresas(empresa* ciudades, int N) {
    empresa* empresas = (empresa*) malloc(N * sizeof(empresa));
    for (int i = 0; i < N; i++) {
        empresas[i] = ciudades[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (empresas[j].capital < empresas[j + 1].capital) {
                empresa aux;
                aux = empresas[j];
                empresas[j] = empresas[j + 1];
                empresas[j + 1] = aux;
            }
        }
    }   
  return empresas;
}