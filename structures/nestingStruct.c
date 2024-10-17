#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char name[20];
        char tier;
    }pokemon;
    typedef struct legendarypokemon{
        pokemon basic;
        char ability[20];
    }legendarypokemon;
    typedef struct godpokemon{
        legendarypokemon legend;
        int spacialattack;
    }godpokemon;
    
    godpokemon p1;
    p1.spacialattack = 800;
    strcpy(p1.legend.basic.name,"arceus");
    p1.legend.basic.attack = 300;
    p1.legend.basic.hp = 500;
    p1.legend.basic.speed = 200;
    p1.legend.basic.tier = 'S';

    legendarypokemon p2;
    strcpy(p2.ability,"Turns into stone");
    strcpy(p1.legend.basic.name,"mewtwo");
    p2.basic.attack = 200;
    p2.basic.hp = 300;
    p2.basic.speed = 100;
    p2.basic.tier = 'S';




}
