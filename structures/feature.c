#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[20];
    }pokemon;
    pokemon a,b;
    a.attack=200;
    a.hp=150;
    a.speed=180;
    a.tier='S';
    strcpy(a.name,"charizard");
    b=a;                            //deep copy
    printf("%d",b.attack);
}