#ifndef _MINA_ORO_H_
#define _MINA_ORO_H

#include "edificio.h"

class Mina_oro : public Edificio{

public:

    /*
    * Post: Creará un objeto de tipo mina_oro, dejando sus atributos cargados con valores por defecto.
    */
    Mina_oro();

    /*
    * Post: Creará un objeto de tipo mina_oro con los parámetros recibidos.
    */
    Mina_oro(char jugador, unsigned int piedra_necesaria, unsigned int metal_necesario, unsigned int madera_necesaria);
    
};

#endif // _MINA_ORO_H_