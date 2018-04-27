#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{

    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/


    /*printf("1. Mostrar el listado de series\n");
    printf("2. Mostrar el listado de usuarios\n");
    printf("3. Mostrar el listado de Usuarios con el nombre de la serie que ve\n");
    printf("4. Mostrar por cada serie, el nombre de los usuarios que la ven\n");
    printf("5. Salir "); */

    // para las opciones scanf("%d", &opcion);


    mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);

    printf("\n");

    mostrarListaSeries(listaDeSeries, TAMSERIE);

    printf("\n");

    mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);

    mostrarSerieconsuUsuario(listaDeSeries,TAMSERIE,listaDeUsuarios,TAMUSUARIO);


    return 0;
}
