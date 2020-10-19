#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED

#include "computadora.h"

class Laboratorio{

    Computadora arreglo [5];
    size_t contador;
public:
    Laboratorio();

    void agregarFinal(const Computadora &c);
    void mostrar();
};

#endif // LABORATORIO_H_INCLUDED
