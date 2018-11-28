#include "Personaje.h"
#include "Bala.h"
#include <allegro.h>

Personaje::Personaje(float x,float y){
    this->x=x;
    this->y=y;
    speed=8;
    punteria=4;
    tipo=0;
    vivo=true;
}

bool Personaje::getVivo(){
    return vivo;}

void Personaje::setVivo(bool vivo){
    this->vivo=vivo;}

void Personaje::muerte(){
    speed=0;
    punteria=0;
    vivo=false;
}

int Personaje::getPunt(){
    return punteria;
}

float Personaje::getXper(){
    return x;}

float Personaje::getYper(){
    return y;}

void Personaje::Arr(){
    y-=speed;
    punteria=1;}

void Personaje::Aba(){
    y+=speed;
    punteria=2;}

void Personaje::Izq(){
    x-=speed;
    punteria=3;}

void Personaje::Der(){
    x+=speed;
    punteria=4;}

void Personaje::Mov1(){
    if(key[KEY_DOWN] and (y<608)){
        Aba();}
    if(key[KEY_UP] and (y>0)){
        Arr();}
    if(key[KEY_RIGHT] and (x<768)){
        Der();}
    if(key[KEY_LEFT] and(x>0)){
        Izq();}
}

void Personaje::Mov2(){
    if(key[KEY_S] and (y<608)){
        Aba();}
    if(key[KEY_W] and (y>0)){
        Arr();}
    if(key[KEY_D] and (x<768)){
        Der();}
    if(key[KEY_A] and(x>0)){
        Izq();}
}

void Personaje::Actualizar(int typejug){
    if (vivo==false){
        blit(perm,screen, 0, 0,x,y, 32, 32);}
    if (vivo==true){
        tipo=typejug;
        if(typejug==1){
            Mov1();
            if(punteria==1){
                blit(per1ar, screen, 0, 0,x,y, 32, 32);
            }else if(punteria==2){
                blit(per1ab, screen, 0, 0,x,y, 32, 32);
            }else if(punteria==3){
                blit(per1iz, screen, 0, 0,x,y, 32, 32);
            }else if(punteria==4){
                blit(per1de, screen, 0, 0,x,y, 32, 32);}
        }else if(typejug==2){
            Mov2();
            if(punteria==1){
                blit(per2ar, screen, 0, 0,x,y, 32, 32);
            }else if(punteria==2){
                blit(per2ab, screen, 0, 0,x,y, 32, 32);
            }else if(punteria==3){
                blit(per2iz, screen, 0, 0,x,y, 32, 32);
            }else if(punteria==4){
                blit(per2de, screen, 0, 0,x,y, 32, 32);}
            }
    }
}
