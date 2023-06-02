#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
int pnts,i, rand_num, gus_num, n;

/* make a new and old player, can have points increase, if more than one players display the winner*/

struct newPlayer {
    char name[10];
    char sem[3];
    char gmail[20];
    char ph[10];
};
struct newPlayer p[10];

void game();
void newPlayer();
// void totalPnts();
// void scoreBoard();

int main () {
    int planum=0, ch=0, n=0;
    while (1) {
        // printf("play 1. 1v1 2. 1vcomputer\n");
        printf("\n----Main Menu----\n1.Begin Game 2.dispaly scoreBoard 3.Exit\nenter your choice\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1: {
            printf("r u a new or old player\nenter 1.for new 2.for old\n");
            scanf("%d", &planum);
            if (planum == 1) {
                printf("enter total no of players\n");
                scanf("%d", &n);
                for(i=0; i<n; i++) {
                    newPlayer();
                    game();
                }
            }
            else {
                game();
            } 
            }
            break;
            // case 2: scoreBoard();
            // break;

            case 3: exit(0);
            default: printf("enter valid choice\n");
            break;    
        }
    }
    return 0;
}


void newPlayer () {
    int  count=3, score=0;
    printf("enter the name, sem, gmail, phome no of player no. %d:\n", i+1);
    scanf("%s%s%s%s", p[i].name, p[i].sem, p[i].gmail, p[i].ph);
    pnts=0;
    srand(time(0));
    rand_num = rand() % 11;
    printf("A random number is generated-- %d\tyou have only 3 tries\n", rand_num);
    for (i=1; i<4; i++) {
        count--;
        printf("\nguess the number:\n");
        scanf("%d", &gus_num);
        if (gus_num == rand_num) {
            pnts+=5;
            printf("YOU WON!!\n");
        }
        else {
            printf("YOU LOST!!\tyou have %d tries left\n", count);  
            pnts-=1;
        }
    }
    // printf("--> Random number was: %d, better luck next time!!!\n", rand_num);
}


// check how to calculate count or no. of tries left
void game () {
    int  count=3, score=0;
    srand(time(0));
    rand_num = rand() % 11;
    printf("A random number is generated-- %d\tyou have only 3 tries\n", rand_num);
    
        printf("\nguess the number:\n");
        scanf("%d", &gus_num);
        if (gus_num == rand_num) {
            pnts+=5;
            printf("YOU WON!!\n");
            
        }
        else {
            printf("YOU LOST!!\tyou have %d tries left\n", count);  
            pnts-=1;
            
        }
    
}




