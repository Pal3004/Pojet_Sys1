#include "exercices.h"
void ajout() {
    int df = open("NOMBRE", O_RDWR);
    int compteur;
    for (int i = 0; i < 10; i++) {
        int nbo_lus=read(df,&compteur,sizeof(int));
        compteur--;
        int nbo_ecrits=write(df,&compteur,sizeof(int));
        lseek(df,(off_t)0,SEEK_SET);
    }
    close(df);
}