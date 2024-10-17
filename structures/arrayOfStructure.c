#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon arr[3];
    arr[0].attack = 150;
    arr[0].hp = 80;
    arr[0].speed = 100;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"pikachu");

    arr[1].attack = 100;
    arr[1].hp = 70;
    arr[1].speed = 80;
    arr[1].tier = 'B';
    strcpy(arr[1].name,"charizard");

    arr[2].attack = 250;
    arr[2].hp = 150;
    arr[2].speed = 180;
    arr[2].tier = 'S';
    strcpy(arr[2].name,"mewtwo");

    for(int i=0;i<3;i++){
        printf("\n%s\n",arr[i].name);
        printf("Attack : %d\n",arr[i].attack);
        printf("HP : %d\n",arr[i].hp);
        printf("Speed : %d\n",arr[i].speed);
        printf("Tier : %c\n",arr[i].tier);
    }
    return 0;
    
}