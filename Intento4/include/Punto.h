#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    private:
        float x,y;
    public:
        Punto();
        Punto(float,float);
        void setX(float);
        void setY(float);
        float getX();
        float getY();
};

#endif // PUNTO_H
