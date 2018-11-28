/*#ifndef BALA_H
#define BALA_H
#include "Tank-e.h"
#include "Player.h"
#include <allegro.h>

class Bala
{
    private:
        float x;
        float y;
        int estado;
        int dir;
        BITMAP *balaar = load_bitmap("balaarriba.bmp",NULL);
        BITMAP *balade = load_bitmap("baladerecha.bmp",NULL);
        BITMAP *balaab = load_bitmap("balaabajo.bmp",NULL);
        BITMAP *balaiz = load_bitmap("balaizquierda.bmp",NULL);
    public:
        Bala();
        void setB(float,float);
};



#endif // BALA_H

/*
class bala
{
    public:
        bala(float,float);
        float x;
        float y;
        bool disp1=0;
        bool disp2=0;
        bool img=false;
        float dir;
        void actdisp1(per);
        void actdisp2(per);
};*/
