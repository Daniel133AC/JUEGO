#include <iostream>
#include "Punto.h"
#include "Player.h"
#include "Info.h"
#include "Tanken.h"
#include <allegro.h>

void colision(Player &a,Tanken &b)
{
    if(a.getV() and b.getV()){
        if(a.getC().getX()+32>=b.getC().getX()-32 and a.getC().getX()-32<=b.getC().getX()+32 and a.getC().getY()+32>=b.getC().getY()-32 and a.getC().getY()-32<=b.getC().getY()+32 and b.getT()==1){
            a.setV(false);
            b.setV(false);}
        if(a.getC().getX()+32>=b.getC().getX()-16 and a.getC().getX()-32<=b.getC().getX()+16 and a.getC().getY()+32>=b.getC().getY()-16 and a.getC().getY()-32<=b.getC().getY()+16 and b.getT()==2){
            b.setV(false);}
    }
}

using namespace std;

int main()
{
    bool gameover=false;
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 704, 576, 0, 0);
    BITMAP *fondo = load_bitmap("fondo.bmp",NULL);
    Player A(0,0);
    Info i(0);
    Tanken en1(80,400,1);
    Tanken en2(200,400,2);
    while(gameover!=true)
    {
        while(i.getM()==0){
            i.Actpri();}
        while(i.getM()==1){
            masked_blit(fondo, screen, 0, 0, 0, 0, 800, 640);
            en1.act(A);
            en2.act(A);
            colision(A,en1);
            colision(A,en2);
            A.ACT();
            rest(30);}

    }



    return 0;
}

END_OF_MAIN();

/*#include <iostream>
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

*/
