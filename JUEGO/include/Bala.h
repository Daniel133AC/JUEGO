#ifndef BALA_H
#define BALA_H
#include "Personaje.h"

class Bala
{
    private:
        float x;
        float y;
        float speed;
        int estado;
        BITMAP *sprbal = load_bitmap("bala.bmp",NULL);
        int dir;
    public:
        Bala(float,float);
        void Setbal(float,float);
        int Getestado();
        void Setestado(int);
        void Actualizar(Personaje per);
        void Crash(Personaje &per);
};

#endif // BALA_H
