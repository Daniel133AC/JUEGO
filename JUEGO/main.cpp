#include <iostream>
#include <allegro.h>
#include "Personaje.h"
#include "Bala.h"
using namespace std;

int main()
{
    bool gameover=false;
    bool colision=false;
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 640, 0, 0);
    //set_screen_blender(255,0,255,200);
    //ÁREA BITMAPS
    BITMAP *fondo = load_bitmap("fondo2.bmp",NULL);
    //ÁREA BITMAPS
    Personaje jug1(64,64);
    Personaje jug2(0,0);
    Bala a(0,0);
    Bala b(0,0);
    while(gameover!=true){
        if (colision==true){
            jug1.muerte();
            jug2.muerte();}
        if((jug1.getYper()>jug2.getYper()-32) and (jug1.getYper()<jug2.getYper()+32) and (jug1.getXper()>jug2.getXper()-32) and (jug1.getXper()<jug2.getXper()+32)){
            if (jug1.getVivo()==true and jug2.getVivo()==true){
            colision=true;}}
        blit(fondo, screen, 0, 0, 0, 0, 800, 640);
        if (jug1.getVivo()==true and jug2.getVivo()==true){
        jug1.Actualizar(1);
        a.Actualizar(jug1);
        a.Crash(jug2);
        jug2.Actualizar(2);
        b.Actualizar(jug2);
        b.Crash(jug1);}
        if (jug1.getVivo()==true and jug2.getVivo()==false){
            jug2.Actualizar(2);
            b.Actualizar(jug2);
            b.Crash(jug1);
            jug1.Actualizar(1);
            a.Actualizar(jug1);
            a.Crash(jug2);
        }
        if (jug1.getVivo()==false and jug2.getVivo()==true){
            jug1.Actualizar(1);
            a.Actualizar(jug1);
            a.Crash(jug2);
            jug2.Actualizar(2);
            b.Actualizar(jug2);
            b.Crash(jug1);
        }
        rest(30);
    }
    return 0;
}

END_OF_MAIN();

