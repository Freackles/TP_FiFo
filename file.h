#ifndef H_FILE
#define H_FILE

#pragma once

typedef struct tVector2D{
    int nx;
    int ny;

}tVector2d;

//type structuré
typedef struct tActor{

    //SDL_TEXTURE* textActor;
    tVector2d Vect;
    int height;
    int width;

}tActor;


typedef struct Element Element;
struct Element
{
    tActor actor;
    Element *suivant;
};

typedef struct File File;
struct File
{
    Element *premier;
};

//prototype
extern tActor init_actor(int nx, int ny, int nw, int nh);
extern File *initialiser();
extern void enfiler(File *file, tActor sAct);
//extern tActor defiler(File *file);
extern void afficherFile(File *file);

#endif
