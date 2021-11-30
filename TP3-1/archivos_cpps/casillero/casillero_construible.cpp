#include "../../archivos_h/casilleros/casillero_construible.h"

using namespace std;

Casillero_construible::Casillero_construible() {
    this -> edificio = nullptr;
    this -> tipo_terreno = TERRENO;
    this -> codigo_color = FONDO_VERDE;
}

Casillero_construible::Casillero_construible(Edificio* edificio) {
    this -> edificio = edificio;
    this -> codigo_color = FONDO_VERDE;
}

void Casillero_construible::mostrar() {
    if (!edificio) {
        cout << COLOR_DORADO << LINEA_DIVISORIA_DISENIO << COLOR_POR_DEFECTO << endl;
        cout << COLOR_VERDE << "Soy un terreno " << EMOJI_TERRENO << ",  un casillero construible y me encuentro vacío." << COLOR_POR_DEFECTO << endl;
        cout << COLOR_DORADO << LINEA_DIVISORIA_DISENIO << COLOR_POR_DEFECTO;

    }
    else {
        cout << COLOR_DORADO << LINEA_DIVISORIA_DISENIO << COLOR_POR_DEFECTO << endl;
        cout << COLOR_VERDE_AGUA << "Soy un terreno " << EMOJI_TERRENO << ", un casillero construible y no me encuentro vacío." << COLOR_POR_DEFECTO << endl;
        this -> edificio -> mostrar_saludo();
        cout << COLOR_DORADO << LINEA_DIVISORIA_DISENIO << COLOR_POR_DEFECTO << endl;
    }
}

void Casillero_construible::agregar_edificio(Edificio* edificio_a_construir) {
    this -> edificio = edificio_a_construir;
}

Edificio* Casillero_construible::obtener_edificio() {
    return this -> edificio;
}

void Casillero_construible::limpiar_casillero() {
    this -> edificio = nullptr;
}

bool Casillero_construible::esta_ocupado() {
    return (bool) this -> edificio;
}