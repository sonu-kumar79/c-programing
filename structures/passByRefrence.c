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

void change(pokemon* p){
    //(*p).attack =200;
    p->attack = 200;
    p->speed =150;
    p->hp = 100;
    p->tier ='S';
    strcpy(p->name,"charlizard");
    return;
}
int main()
{
    pokemon pikachu ={190,100,80,'A',"pikachu"};
    // pikachu.attack = 190;
    // pikachu.speed =100;
    // pikachu.hp = 80;
    // pikachu.tier ='A';
    // strcpy(pikachu.name,"pikachu");
    change(&pikachu);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.hp);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);
    return 0;
}
