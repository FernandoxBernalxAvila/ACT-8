#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Computadora
{
    string sistemaOp;
    string procesador;
    float almacenamiento;
    float memoriaRam;
public:
    Computadora();
    Computadora(const string &sistemaOp,const string &procesador,float almacenamiento,float memoriaRam);

    void setSistemaOp(const string &v);
    string getSistemaOp();

    void setProcesador(const string &v);
    string getProcesador();

    void setAlmacenamiento(float v);
    float getAlmacenamiento();

    void setMemoriaRam(float v);
    float getMemoriaRam();
};

#endif // COMPUTADORA_H_INCLUDED
