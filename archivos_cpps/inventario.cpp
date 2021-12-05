#include "../archivos_h/inventario.h"

using namespace std;

Inventario::Inventario() {
    this -> inventario = new Material* [MATERIALES_DISPONIBLES];
    this -> cantidad_materiales = 0;
}

void Inventario::agregar_material(Material* material) {
    this -> inventario[this -> cantidad_materiales] = material;
    this -> cantidad_materiales++;
}

Material** Inventario::obtener_inventario() {
    return this -> inventario;
}

int Inventario::obtener_cantidad_materiales() {
    return this -> cantidad_materiales;
}

Material* Inventario::obtener_material(string material_pedido) {
    Material* material_a_devolver = 0;
    int indice = 0;
    while (!material_a_devolver && indice < this -> cantidad_materiales) {
        Material* material = this -> inventario[indice];
        if (material -> obtener_nombre_material() == material_pedido) {
            material_a_devolver = material;
            material = nullptr;
        }
        indice++;
    }
    return material_a_devolver;
}

void Inventario::modificar_cantidad_material(string material_a_modificar, int cantidad) {
    Material* material = this -> obtener_material(material_a_modificar);
    material -> modificar_cantidad(cantidad);
    material = nullptr;
}

void Inventario::mostrar_inventario() {
    for (int i = 0; i < this -> cantidad_materiales; i++) {
        this -> inventario[i] -> mostrar_material();
        cout << COLOR_MARRON << LINEA_DIVISORIA << COLOR_POR_DEFECTO << endl;
    }
}

Inventario::~Inventario() {
    for (int i = 0; i < this -> cantidad_materiales; i++)
        this -> inventario[i] = nullptr;

    delete [] this -> inventario;
    this -> inventario = nullptr;
}

// SE PUEDEN SACAR??
// int Inventario::obtener_indice_del_material(string material) {
//     int indice = 0;
//     while (this -> inventario[indice] -> obtener_nombre_material() != material) {
//         indice++;
//     }
//     return indice;
// }

// void Inventario::modificar_cantidad_material(int indice, int cantidad) {
//     this -> inventario[indice] -> modificar_cantidad(cantidad);
// }