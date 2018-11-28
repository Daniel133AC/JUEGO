/*#include "Bala.h"

Bala::Bala()
{
    x=0;
    y=0;
    estado=0;
    dir=0;
}

void Bala::setB(float _x,float _y)
{
    x2=_x;
    y2=_y;
}

void Bala::act()
{
    if(estado==0 and key[KEY_SPACE]){
        estado=1;}
    if(estado==1){
        if (dir==1){
            y-=32;
            masked_blit(balaar, screen, 0, 0,0,0, 704, 576);}
        if (dir==2){
            x+=32;
            masked_blit(balade, screen, 0, 0,0,0, 704, 576);}
        if (dir==3){
            y+=32;
            masked_blit(balab, screen, 0, 0,0,0, 704, 576);}
        if (dir==4){
            x-=32;
            masked_blit(balaiz, screen, 0, 0,x,y, 704, 576);}
        if((x>=704)||(x<=0)||(y>=576)||(y<=0)){
            dir=0;
            estado=0;
    }
}
/*
#include "bala.h"
#include "per.h"
#include <allegro.h>



void bala::actdisp1(per i){
    if (disp1==0){
        x=i.x+10;
        y=i.y+8;
        img=false;}
    if((key[KEY_SPACE])&&(disp1==0)){
        dir=i.punteria;
        disp1=1;}
    if (disp1==1){
        img=true;
        if((x>=800)||(x<=0)||(y>=640)||(y<=0)){
            disp1=0;
            dir=0;
        }
        if (dir==1){
        y-=32;}
        if (dir==2){
        y+=32;}
        if (dir==3){
        x-=32;}
        if (dir==4){
        x+=32;}
    }
}

void bala::actdisp2(per i){
    if (disp2==0){
        x=i.x+10;
        y=i.y+8;
        img=false;}
    if((key[KEY_Q])&&(disp2==0)){
        dir=i.punteria;
        disp2=1;}
    if (disp2==1){
        img=true;
        if((x>=800)||(x<=0)||(y>=640)||(y<=0)){
            disp2=0;
            dir=0;}
        if (dir==1){
        y-=32;}
        if (dir==2){
        y+=32;}
        if (dir==3){
        x-=32;}
        if (dir==4){
        x+=32;}
    }
}
*/
