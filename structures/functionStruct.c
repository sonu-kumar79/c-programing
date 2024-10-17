#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        char name[20];
        char tier;
}pokemon;

void fun(pokemon p){
    printf("%d",p.attack);
    return;
}
int main()
{
    pokemon pikachu;
    pikachu.attack = 190;
    fun(pikachu);
    return 0;
}
