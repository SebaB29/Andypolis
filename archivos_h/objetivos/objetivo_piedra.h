#ifndef _OBJETIVO_PIEDRA_H_
#define _OBJETIVO_PIEDRA_H_

#include "objetivo.h"

class Objetivo_piedra: public Objetivo{
    
    private:
        unsigned int cantidad_piedras;

    public:

        /*
        *Post: Construira un objeto de tipo Objetivo_piedra, con sus valores por defecto.
        */
        Objetivo_piedra();

        /*
        *Post: Mostrará por consola el progreso.
        */
        void mostrar_progreso();

        /*
        *Post: Devolverá true si hay 50000, o false en caso contrario.
        */
        bool se_cumplio_el_objetivo(int cantidad);
};

#endif // _OBJETIVO_PIEDRA_H_