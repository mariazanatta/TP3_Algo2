#ifndef TP3_OPCION_H
#define TP3_OPCION_H
#include <iostream>

using namespace std;

#include<cstdlib>
#include<ctime>
#include "novela.h"
#include "historica.h"
#include "poema.h"
#include "cuento.h"
#include "lista.h"
#include "carga_escritores.h"
#include "carga_lecturas.h"
#include "cola.h"
const char SI = 's';
const char NO = 'n';

class Opcion {

protected:
//atributos
    Lista<Lectura> *lecturas;
    Lista<Escritor> *escritores;
public:
//Métodos
    // Pre: -
    // Post: Constructor de la clase Opcion
    Opcion(Lista<Lectura>* lecturas, Lista<Escritor>* escritores);

    // Pre: -
    // Post: Imprime por pantalla las opciones que tiene el usuario en el menu
    static void imprimir_opciones();

    // Pre: -
    // Post: Devuelve true si los caracteres de la cadena son números, false si no.
    static bool entrada_valida(string cadena);

    // Pre: -
    // Post: Pide al usuario que ingrese lo que esta en tipo hasta que el ingreso sea válido.
    static int input_numero(string texto);

    //Pre: -
    //Post: Imprime por pantalla la introducción a la opción elegida.
    virtual void introduccion(string opcion);

    // Pre: -
    // Post: Ejecuta la opción.
    virtual void ejecutar_opcion();

    virtual ~Opcion();

};


#endif //TP3_OPCION_H
