#include "Tanken.h"
#include "Player.h"

Tanken::Tanken(float x,float y,int tipo)
{
    dir=3;
    speed=2.5;
    this->x=x;
    this->y=y;
    this->tipo=tipo;
    if(tipo==1){
        masked_blit(tip1ab, screen, 0, 0,x,y,64,64);
        C.setX(x+32);
        C.setY(y+32);}
    else if(tipo==2){
        masked_blit(tip2ab, screen, 0, 0,x,y,32,32);
        C.setX(x+16);
        C.setY(y+16);}
    vivo=true;
}

void Tanken::arr()
{
    y-=speed;
    dir=1;
}

void Tanken::der()
{
    x+=speed;
    dir=2;
}

void Tanken::aba()
{
    y+=speed;
    dir=3;
}

void Tanken::izq()
{
    x-=speed;
    dir=4;
}

void Tanken::act(Player a)
{
    if(vivo==false){
        if(tipo==1){
            masked_blit(muerto, screen, 0, 0,x,y, 64, 64);}
        if(tipo==2){
             masked_blit(muerto, screen, 0, 0,x-16,y-16, 64, 64);}
    }
    else if(vivo==true){
        if(tipo==1){
            C.setX(x+32);
            C.setY(y+32);
            if(C.getX()<a.getC().getX()){
                der();}
            else if(C.getX()>a.getC().getX()){
                izq();}
            else if(C.getY()>a.getC().getY()){
                arr();}
            else if(C.getY()<a.getC().getY()){
                aba();}
            if(dir==1){
                masked_blit(tip1ar, screen, 0, 0,x,y, 64, 64);}
            else if(dir==2){
                masked_blit(tip1de, screen, 0, 0,x,y, 64, 64);}
            else if(dir==3){
                masked_blit(tip1ab, screen, 0, 0,x,y, 64, 64);}
            else if(dir==4){
                masked_blit(tip1iz, screen, 0, 0,x,y, 64, 64);}
        }
        if(tipo==2){
            C.setX(x+16);
            C.setY(y+16);
            if(C.getX()+64<a.getC().getX()){
                der();}
            else if(C.getX()-64>a.getC().getX()){
                izq();}
            else if(C.getY()-64>a.getC().getY()){
                arr();}
            else if(C.getY()+64<a.getC().getY()){
                aba();}
            if(dir==1){
                masked_blit(tip2ar, screen, 0, 0,x,y, 32, 32);}
            else if(dir==2){
                masked_blit(tip2de, screen, 0, 0,x,y, 32, 32);}
            else if(dir==3){
                 masked_blit(tip2ab, screen, 0, 0,x,y, 32, 32);}
            else if(dir==4){
                masked_blit(tip2iz, screen, 0, 0,x,y, 32, 32);}
        }
    }
}

Punto Tanken::getC()
{
    return C;
}

int Tanken::getT()
{
    return tipo;
}

void Tanken::setV(bool n)
{
    vivo=n;
}

bool Tanken::getV()
{
    return vivo;
}
