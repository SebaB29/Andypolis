#ifndef _OBJETIVO_BOMBARDERO_H
#define _OBJETIVO_BOMBARDERO_H

#include "objetivo.h"

class Objetivo_bombardero: public Objetivo{

    private:
    
        int cantidad_bombardero;

    public:

        /*
        * Post: Crea un objeto de tipo Objetivo_bombardero, con los valores por defecto.
        */
        Objetivo_bombardero();

        /*
        * Post: Mostrará el progreso por consola.
        */
        void mostrar_progreso();

        /*
        * Post: Devolvera true si se usaron 5 bombas, false en caso contrario.
        */
        bool se_cumplio_el_objetivo(int cantidad);
};

#endif // _OBJETIVO_BOMBARDERO_H_