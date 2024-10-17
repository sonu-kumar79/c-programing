#include<stdio.h>
#include<string.h>
typedef struct pokimon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[20];
}pokimon;
int main()
{
    pokimon p1;
    p1.attack = 80;
    p1.speed =100;
    p1.hp = 80;
    p1.tier ='A';
    strcpy(p1.name,"pikachu");
    pokimon* x=&p1;
    printf("%p\n",&p1.hp);
    printf("%p\n",&p1.attack);
    printf("%p\n",&p1.speed);
    printf("%p\n",&p1.tier);
    printf("%p\n",&p1.name);
    printf("%p\n",x);
}