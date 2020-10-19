#include <iostream>
#include <string>

#include "laboratorio.h"

using namespace std;

int main() {
    Computadora c01;
    c01.setSistemaOp("Windows 10");
    c01.setProcesador("Intel i9 - 10na");
    c01.setAlmacenamiento(2000);
    c01.setMemoriaRam(32);

    Laboratorio lab;
    lab.agregarFinal(c01);

    lab.mostrar();
/*
    cout<<c01.getSistemaOp()<<endl;
    cout<<c01.getProcesador()<<endl;
    cout<<c01.getAlmacenamiento()<<endl;
    cout<<c01.getMemoriaRam()<<endl;
*/
    return 0;
}
