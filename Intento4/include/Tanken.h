#ifndef TANKEN_H
#define TANKEN_H
#include <allegro.h>
#include "Player.h"
#include "Punto.h"
#include "Bala.h"


class Tanken
{
    private:
        float x;
        float y;
        int dir;
        float speed;
        int tipo;
        bool vivo;
        Punto C;
        BITMAP *tip1ar = load_bitmap("enemyarriba.bmp",NULL);
        BITMAP *tip1de = load_bitmap("enemyderecha.bmp",NULL);
        BITMAP *tip1ab = load_bitmap("enemyabajo.bmp",NULL);
        BITMAP *tip1iz = load_bitmap("enemyizquierda.bmp",NULL);
        BITMAP *tip2ar = load_bitmap("enemy2arriba.bmp",NULL);
        BITMAP *tip2de = load_bitmap("enemy2derecha.bmp",NULL);
        BITMAP *tip2ab = load_bitmap("enemy2abajo.bmp",NULL);
        BITMAP *tip2iz = load_bitmap("enemy2izquierda.bmp",NULL);
        BITMAP *muerto = load_bitmap("tandemuerto.bmp",NULL);
        void arr();
        void der();
        void aba();
        void izq();
    public:
        void act(Player);
        Tanken(float,float,int);
        Punto getC();
        int getT();
        bool getV();
        void setV(bool);
};

#endif // TANKEN_H
