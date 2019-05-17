#include <stdio.h>
#include <stdlib.h>
#include "file.h"

tActor init_actor(int nx, int ny, int nw, int nh)
{

    tActor sTest;

    //coordonée
    sTest.Vect.nx=nx;
    sTest.Vect.ny=ny;
    sTest.height=nh;
    sTest.width=nw;

    //texture


    return sTest;
}

File *initialiser()
{
    File *file = malloc(sizeof(*file));
    file->premier = NULL;

    return file;
}


void enfiler(File *file, tActor sAct)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (file == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->actor = sAct;
    nouveau->suivant = NULL;

    if (file->premier != NULL) /* La file n'est pas vide */
    {
        /* On se positionne � la fin de la file */
        Element *elementActuel = file->premier;
        while (elementActuel->suivant != NULL)
        {
            elementActuel = elementActuel->suivant;
        }
        elementActuel->suivant = nouveau;
    }
    else /* La file est vide, notre �l�ment est le premier */
    {
        file->premier = nouveau;
    }
}



