//
// Created by ultim on 4/5/2018.
//

#ifndef ED2_PROYECTO_AVL_H
#define ED2_PROYECTO_AVL_H
#include "structs.h"
//#include "manager.h"


class Avl {
public:
    Avl();
    void printRegistro(registroP rp);
    void prueba();
    registroArbol getRarbol(DataFile f, int pos);
    char* readAVL(int i,int cantidad,char*read);
    char* getlastname(DataFile f,int pos);
    char* getname(DataFile,int pos);
    registroP getRegistro(int pos);
    void nuevoRegistro(registroP rp);
    void agregarNodo(structs* n);
    int buscar(char end[30]);
    int primerposicionlistas(char end[30], structs * r);
    void PreOrder();
    void PreOrder(char end[30]);
    void PosOrder();
    void PosOrder(char end[30]);
    void InOrder();
    void InOrder(char end[30]);
    void RegistroMesAnio();
    void cargarArbolDe(string name);
    void eliminar(char end[30]);
    void save();
    void cargarArbol();
    structs* minimoDelNodo(structs *sr);
    structs* eliminarmas(char end[30], structs ** sr);
    void rotacion_der(structs **sr);
    void rotacion_izq(structs ** sr);
    void RD_derecha(structs ** sr);
    void RD_izquierda(structs ** sr);
    void balanceo(structs ** sr);
    structs * padrede(structs raiz,structs hijo);
    int abs(int x);
    int maximo(int x, int y);
    int agg(structs**sr,structs * nuevo);
    int buscar(char las[30],structs * raiz);
    void imprimirArbolPre(structs * sb);
    void imprimirArbolPos(structs * sb);
    void imprimirArbolesIn(structs*sb);
    int charToInt(char*x);
    int cargarHijos(structs raiz,structs **ri);
    void actualizarHijosFile(structs *sr, structs * hijo_der=NULL, structs * hijo_izq);
    void getposfromfile(DataFile f, char end[30]);








};


#endif //ED2_PROYECTO_AVL_H
