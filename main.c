#include <stdio.h>
#include <stdlib.h>
#include "file.h"



int main()
{
    File *maFile = initialiser();

    enfiler(maFile, init_actor(5, 2, 7, 5));
    enfiler(maFile, init_actor(7, 4, 7, 5));
    enfiler(maFile, init_actor(12, 21, 7, 5));
    enfiler(maFile, init_actor(56, 43, 7, 5));
    enfiler(maFile, init_actor(51, 72, 7, 5));
    enfiler(maFile, init_actor(9, 78, 7, 5));

    printf("\nEtat de la file :\n");
    afficherFile(maFile);

    /*printf("\nJe defile %d\n", defiler(maFile));
    printf("Je defile %d\n", defiler(maFile));*/

    printf("\nEtat de la file :\n");
    afficherFile(maFile);

    return 0;
}


