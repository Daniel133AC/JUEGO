#ifndef INFO_H
#define INFO_H
#include <allegro.h>

class Info
{
    private:
        int val;
        int modo;
        BITMAP *menu1 = load_bitmap("menuopcion1.bmp",NULL);
        BITMAP *menu2 = load_bitmap("menuopcion2.bmp",NULL);
    public:
        Info(int);
        void Actpri();
        int getM();

};

#endif // INFO_H
