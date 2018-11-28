#include "Info.h"
#include <allegro.h>

Info::Info(int modo)
{
    val=1;
    this->modo=modo;
}

void Info::Actpri()
{
    if(key[KEY_ENTER] and val==1){
        modo=1;
        val=0;}
    if(key[KEY_DOWN] and val==1){
        val=2;}
    if(key[KEY_UP] and val==2){
        val=1;}
    if(modo==0){
        if(val==1){
            masked_blit(menu1, screen, 0, 0,0,0, 704, 576);}
        if(val==2){
            masked_blit(menu2, screen, 0, 0,0,0, 704, 576);}
    }
}

int Info::getM()
{
    return modo;
}
