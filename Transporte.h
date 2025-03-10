//
// Creado por Alfredo Gómez Mendoza el 27/05/2022.
//
#ifndef RAMPAGE_TRANSPORTE_H
#define RAMPAGE_TRANSPORTE_H
#include "Defensa.h"

class Transporte:public Defensa{
private:
    int rango_misil;
    int cooldown=2;
    void activar_escudo();
    void moverse();
    void disparar(int *ptrvidamons);
public:
    Transporte():Defensa("Transporte de misiles", 90, 12, 12){};
    Transporte(string nombre, int vida, int fuerza, int rango, int misil)
            :Defensa(nombre,vida,fuerza,rango),rango_misil(misil){};
};
void Defensa::disparar(int *ptrvidamons){
    if (cooldown%2=0){
        *ptrvidamons-fuerza;
    }
    else{
        cout<<"El transporte de misiles intentó atacar pero tiene que recargar"<<endl;
    }
};
#endif

