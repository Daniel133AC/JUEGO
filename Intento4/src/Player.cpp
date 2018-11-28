#include "Player.h"
#include "Punto.h"

Player::Player(float x,float y)
{
    this->x=x;
    this->y=y;
    C.setX(x+32);
    C.setY(y+32);
    speed=5;
    dir=2;
    vivo=true;
}

void Player::arr()
{
    y-=speed;
    dir=1;
}

void Player::der()
{
    x+=speed;
    dir=2;
}

void Player::aba()
{
    y+=speed;
    dir=3;
}

void Player::izq()
{
    x-=speed;
    dir=4;
}

void Player::mov()
{
    if(key[KEY_DOWN] and (C.getY()+32<576)){
        aba();}
    if(key[KEY_UP] and (C.getY()-32>0)){
        arr();}
    if(key[KEY_RIGHT] and (C.getX()+32<704)){
        der();}
    if(key[KEY_LEFT] and(C.getX()-32>0)){
        izq();}
}

void Player::ACT()
{
    if(vivo==false){
        masked_blit(muerto, screen, 0, 0,x,y, 64, 64);}
    if(vivo==true){
        C.setX(x+32);
        C.setY(y+32);
        mov();
        if(dir==1){
            masked_blit(per1ar, screen, 0, 0,x,y, 64, 64);}
        else if(dir==2){
            masked_blit(per1de, screen, 0, 0,x,y, 64, 64);}
        else if(dir==3){
            masked_blit(per1ab, screen, 0, 0,x,y, 64, 64);}
        else if(dir==4){
            masked_blit(per1iz, screen, 0, 0,x,y, 64, 64);}
    }
}

Punto Player::getC()
{
    return C;
}

void Player::setV(bool n)
{
    vivo=n;
}

bool Player::getV()
{
    return vivo;
}

/*#include "Personaje.h"
#include "Bala.h"
#include <allegro.h>

   //A.setB(x+32,y+32);
    //B.setB(x+32,y+32);

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
*/
