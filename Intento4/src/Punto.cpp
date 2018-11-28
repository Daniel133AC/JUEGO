#include "Punto.h"

Punto::Punto()
{
    x=0;
    y=0;
}

Punto::Punto(float x,float y)
{
    this->x=x;
    this->y=y;
}

float Punto::getX(){
    return x;
}

float Punto::getY(){
    return y;
}

void Punto::setX(float x)
{
    this->x=x;
}

void Punto::setY(float y)
{
    this->y=y;
}
