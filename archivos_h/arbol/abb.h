#ifndef _ABB_H_
#define _ABB_H_

#include "nodo.h"
#include "../jugador.h"

class Abb{

    private:

        Nodo* raiz;

    public:

        /* 
        Post: crea un objeto de tipo Abb
        */
        Abb();

        /*
        *Pre: Que el nodo raiz no sea null.
        *Post: Construirá un objeto de tipo Abb con los valores de los parametros recibidos.
        */
        Abb(Nodo* raiz);

        /*
        *Pre: Que el parametro no sean null.
        *Post: Agregará un nodo en la clase Abb.
        */
        void agregar_nodo(Edificio* nuevo_edficio);

        /*
        *Pre: Que los parametros no sean null.
        *Post: Agregará un nodo en la clase Abb.
        */
        Nodo* agregar_nodo_rec(Nodo* arbol, Edificio* nuevo_edificio);

        /*
        *POS:
        */
        void mostrar_arbol(Jugador* jugador);

        /*
        *POS:
        */
        void _mostrar_arbol(Nodo* arbol, Jugador* jugador);

        /*
        *Pre: recibe un puntero a nodo y un string
        *Pos: devuelve verdadero en caso que el nombre exista, falso de lo contrario
        */
        bool existe_el_edificio(Nodo* nodo, std::string nombre);

        /*
        *Pre:
        *Pos:
        */
        Edificio* buscar_edificio(std::string nombre);

        /*
        *Pre: recibe un puntero a nodo y un string
        *Pos: devuelve un puntero a los materiales necesarios
        */
        Edificio* buscar_edificio_rec(Nodo* nodo, std::string nombre);

        
        /*
        *Pre:
        *Pos:
        */
        int contar_construidos(Jugador* jugador, std::string nombre_edificio);

        /*
        *Post: Liberará la memoria utilizada por la clase a lo largo del programa.
        */
        void borrar_arbol(Nodo* nodo);

        /*
        *Post: Liberará la memoria utilizada por la clase a lo largo del programa.
        */
        ~Abb();

};

#endif //_ABB_H_