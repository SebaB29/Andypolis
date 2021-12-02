#include "../../archivos_h/construcciones/fabrica.h"

using namespace std;

Fabrica::Fabrica() : Edificio() {
    this -> inicializar_atributos();
}

Fabrica::Fabrica(unsigned int piedra_necesaria, unsigned int madera_necesaria, unsigned int metal_necesario, unsigned int permitidos) : Edificio(piedra_necesaria, madera_necesaria, metal_necesario, permitidos) {
    this -> inicializar_atributos();
}

Fabrica::Fabrica(unsigned int fila, unsigned int columna) : Edificio(fila, columna) {
    this -> inicializar_atributos();
}

void Fabrica::inicializar_atributos(){
    this -> nombre_material = METAL;
    this -> cantidad_material_producido = BRINDAR_MATERIALES_FABRICA;
    this -> nombre_del_edificio = NOMBRE_FABRICA;
    this -> codigo_emoji = EMOJI_FABRICA;
}

void Fabrica::mostrar_caracteristicas(int construidos) {
    cout << "--> " << COLOR_VERDE_AGUA << this -> nombre_del_edificio << COLOR_POR_DEFECTO << endl;
    cout << "Piedra requerida: " << this -> materiales_necesarios[POS_PIEDRA] << endl;
    cout << "Madera requerida: " << this -> materiales_necesarios[POS_MADERA] << endl;
    cout << "Metal requerido: " << this -> materiales_necesarios[POS_METAL] << endl;
    cout << "Construidos hasta el momento: " << construidos << endl;
    cout << "Puede construir " << this -> permitidos - construidos << " más" << endl;
    cout << "Brinda material: SI" << endl;
    cout << COLOR_MARRON << LINEA_DIVISORIA << COLOR_POR_DEFECTO << endl;
}

void Fabrica::mostrar_saludo() {
    cout << COLOR_MARRON << "Soy una fabrica y me encuentro en el casillero consultado" << COLOR_POR_DEFECTO << endl;
}