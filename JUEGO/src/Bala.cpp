#include "Bala.h"
#include "Personaje.h"
#include <allegro.h>

#include <iostream>
using namespace std;

Bala::Bala(float x,float y){
    this->x=x;
    this->y=y;
    speed=20;
    estado=0;
    dir=0;
}

void Bala::Setbal(float x,float y){
    this->x=x;
    this->y=y;
}

int Bala::Getestado(){
    return estado;}

void Bala::Setestado(int estado){
    this->estado=estado;}

void Bala::Crash(Personaje &per){
    if ((estado==1)){
        if((y>per.getYper()-16) and (y<per.getYper()+32) and (x>per.getXper()-16) and (x<per.getXper()+32)){
            per.muerte();
            estado=0;}
    }
}

void Bala::Actualizar(Personaje per){
    if(per.getVivo()==true){
        if((key[KEY_SPACE]) and (per.tipo==1)){
            estado=1;}
        if((key[KEY_R]) and (per.tipo==2)){
            estado=1;}
        if(estado==0){
            Setbal(per.getXper()+8,per.getYper()+8);
            if(per.getPunt()==1){
                dir=1;}
            if(per.getPunt()==2){
                dir=2;}
            if(per.getPunt()==3){
                dir=3;}
            if(per.getPunt()==4){
                dir=4;}
        }
        if(estado==1){
            if((x>=800)||(x<=0)||(y>=640)||(y<=0)){
                estado=0;
                dir=0;}
            if(dir==1){
                y-=speed;}
            else if(dir==2){
                y+=speed;}
            else if(dir==3){
                x-=speed;}
            else if(dir==4){
                x+=speed;}
            blit(sprbal, screen, 0, 0, x, y, 16, 16);
        }
    }
}

