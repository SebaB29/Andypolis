#ifndef _CASILLERO_TRANSITABLE_H_
#define _CASILLERO_TRANSITABLE_H_

#include "casillero.h"

class Casillero_transitable: public Casillero {

    private:

        Material* material;
        Jugador* jugador;

    public:

        /*
        *Post: Creará un objeto de tipo Casillero_transitable, dejando sus atributos cargados con valores por defecto.
        */
        Casillero_transitable();

        /*
        *Pre: Que el parámetro material no sea null.
        *Post: Creará un objeto de tipo Casillero_transitable con el parámetro material.
        */
        Casillero_transitable(Material* material);

        /*
        *Post: Mostrará lo que hay en el casillero.
        */
        void mostrar();

        /*
        *Post: Devolvera el puntero de tipo material que está en el atributo.
        */
        Material* obtener_puntero_material();

        /*
        *Post: Devolvera el puntero de tipo jugador del jugador pedido, en caso contrario devolverá null.
        */
        Jugador* obtener_puntero_jugador();

        /*
        *Post: Devolvera true si el casillero se encuentra ocupado con un material o jugador, o false en caso contrario.
        */
        bool esta_ocupado();

        /*
        *Pre: Agregará un material al casillero.
        *Post: Que el parámetro material_a_agregar no sea null.
        */
        void agregar_material(Material* material_a_agregar);

        /*
        *Pre: Que el parametro no sea null.
        *Post: Agregará un jugador al casillero transitable.
        */
        void agregar_jugador(Jugador* jugador);
        
        /*
        *Post: Limpiará el contenido que hay en el casillero.
        */
        void limpiar_casillero();
        
};

#endif // CASILLERO_TRANSITABLE_H