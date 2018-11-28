#ifndef PLAYER_H
#define PLAYER_H
#include "Punto.h"
#include "Bala.h"
#include <allegro.h>

class Player
{
    private:
        float x;
        float y;
        float speed;
        int dir;
        bool vivo;
        Punto C;
        //BITMAPS
        BITMAP *per1ar = load_bitmap("p1arriba.bmp",NULL);
        BITMAP *per1de = load_bitmap("p1derecha.bmp",NULL);
        BITMAP *per1ab = load_bitmap("p1abajo.bmp",NULL);
        BITMAP *per1iz = load_bitmap("p1izquierda.bmp",NULL);
        BITMAP *muerto = load_bitmap("tandemuerto.bmp",NULL);
        //MOVER
        void arr();
        void der();
        void aba();
        void izq();
        void mov();
    public:
        Punto getC();
        Player(float,float);
        void ACT();
        void setV(bool);
        bool getV();
};

#endif // PLAYER_H

/*#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <allegro.h>

class Personaje
{
    private:
        Bala A;
        Bala B;
        float x;
        float y;
        float speed;
        int punteria;
        bool vivo;
        void Arr();
        void Aba();
        void Izq();
        void Der();
        void Mov1();
        void Mov2();
         //ÁREA BITMAPS
        BITMAP *perm = load_bitmap("muerto.bmp",NULL);
        BITMAP *per1ab = load_bitmap("personajeaba.bmp",NULL);
        BITMAP *per1ar = load_bitmap("personajearr.bmp",NULL);
        BITMAP *per1de = load_bitmap("personajeder.bmp",NULL);
        BITMAP *per1iz = load_bitmap("personajeizq.bmp",NULL);
        BITMAP *per2ab = load_bitmap("personaje2aba.bmp",NULL);
        BITMAP *per2ar = load_bitmap("personaje2arr.bmp",NULL);
        BITMAP *per2de = load_bitmap("personaje2der.bmp",NULL);
        BITMAP *per2iz = load_bitmap("personaje2izq.bmp",NULL);
        //ÁREA BITMAPS
    public:
        Personaje(float,float);
        bool getVivo();
        void setVivo(bool);
        void Actualizar(int);
        float getXper();
        float getYper();
        int getPunt();
        int tipo;
        void muerte();
};

#endif // PERSONAJE_H*/
