//
// Created by ultim on 4/5/2018.
//

#include "Avl.h"

Avl::Avl() {
    _raiz = NULL;
    manager = new ManagerListaNombre();
    char* fileName = new char[strlen("AVL_Apellido.dat")];
    memcpy(fileName,"AVL_Apellido.dat",strlen("AVL_Apellido.dat"));
     file = new DataFile(fileName);
    delete[] fileName;
    ifstream f("AVL_Apellido.dat");
    if(f)
    {
        cargarArbol();
    }
    else
    {
        file->abrir();
    }
}

void Avl::printRegistro(registroP rp) {

}

void Avl::prueba() {

}

registroArbol Avl::getRarbol(DataFile f, int pos) {
    return registroArbol();
}

char *Avl::readAVL(int i, int cantidad, char *read) {
    return nullptr;
}

char *Avl::getlastname(DataFile f, int pos) {
    return nullptr;
}

char *Avl::getname(DataFile, int pos) {
    return nullptr;
}

registroP Avl::getRegistro(int pos) {
    return registroP();
}

void Avl::nuevoRegistro(registroP rp) {

}

void Avl::agregarNodo(structs *n) {

}

int Avl::buscar(char *end) {
    return 0;
}

int Avl::primerposicionlistas(char *end, structs *r) {
    return 0;
}

void Avl::PreOrder() {

}

void Avl::PreOrder(char *end) {

}

void Avl::PosOrder() {

}

void Avl::PosOrder(char *end) {

}

void Avl::InOrder() {

}

void Avl::InOrder(char *end) {

}

void Avl::RegistroMesAnio() {

}

void Avl::cargarArbolDe(string name) {

}

void Avl::eliminar(char *end) {

}

void Avl::save() {

}

void Avl::cargarArbol() {

}

structs *Avl::minimoDelNodo(structs *sr) {
    return nullptr;
}

structs *Avl::eliminarmas(char *end, structs **sr) {
    return nullptr;
}

void Avl::rotacion_der(structs **sr) {

}

void Avl::rotacion_izq(structs **sr) {

}

void Avl::RD_derecha(structs **sr) {

}

void Avl::RD_izquierda(structs **sr) {

}

void Avl::balanceo(structs **sr) {

}

structs *Avl::padrede(structs raiz, structs hijo) {
    return nullptr;
}

int Avl::abs(int x) {
    return 0;
}

int Avl::maximo(int x, int y) {
    return 0;
}

int Avl::agg(structs **sr, structs *nuevo) {
    return 0;
}

int Avl::buscar(char *las, structs *raiz) {
    return 0;
}

void Avl::imprimirArbolPre(structs *sb) {

}

void Avl::imprimirArbolPos(structs *sb) {

}

void Avl::imprimirArbolesIn(structs *sb) {

}

int Avl::charToInt(char *x) {
    return 0;
}

int Avl::cargarHijos(structs raiz, structs **ri) {
    return 0;
}

void Avl::actualizarHijosFile(structs *sr, structs *hijo_der, structs *hijo_izq) {

}

void Avl::getposfromfile(DataFile f, char *end) {

}
