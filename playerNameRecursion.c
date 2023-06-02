#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i, op;
int pnts, rand_num, gus_num, playerNum, in=0;

void newPlayer();
void game();    

struct newPlayer {
    char name[10];
    char sem[3];
    char gmail[20];
    char ph[10];
};
struct newPlayer p[10];                                                               

int main () {
    while(1) {
        printf("----menu---\n1.start 2.exit\n");
        scanf("%d", &op);
        switch (op) {
            case 1: {
                printf("enter the total players\n");
                scanf("%d", &playerNum);
                for (in=0; in<playerNum; in++) {
                    newPlayer();
                }
            }
            break;
            case 2: exit(0);
        }
    }
    return 0;
}

void newPlayer () {
    printf("\n->player no. %d\n", in+1);
    printf("enter the name, sem, gmail, phome no of player no. %d:\n", i+1);
    scanf("%s%s%s%s", p[i].name, p[i].sem, p[i].gmail, p[i].ph);
    game(in+1);
}

void game(int j) {
    
    printf("->game of player %d\n", in+1);
    int  count=3, score=0;
    srand(time(0));
    rand_num = rand() % 11;
    printf("A random number is generated-- %d\tyou have only 3 tries\n", rand_num);
    for (i=1; i<4; i++) {
        count--;
        printf("\n=>guess the number:\n");
        scanf("%d", &gus_num);
        if (gus_num == rand_num) {
            pnts+=5;
            printf("YOU WON!!\n");
            return;
        }
        
            printf("YOU LOST!!\tyou have %d tries left\n", count);  
            pnts-=1;
            // totalPnts();
    }
}

