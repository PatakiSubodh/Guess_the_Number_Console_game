/* !st pgm */
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
char name[50], sem[20], gmail[30];
char ph[10];
int i, rand_num, gus_num, ch;

/* make a new and old player, can have points increase, if more than one players display the winner*/
void newPlayer () {
    printf("enter the name, sem, gmail, phome no:\n");
    scanf("%s%s%s%s", name, sem, gmail, ph);
}

void game () {
    int  count=3;
    srand(time(0));
    rand_num = rand() % 11;
    printf("A random number is generated\tyou have only 3 tries\n");
    for (i=1; i<4; i++) {
        count--;
        printf("\nguess the number:\tyou have %d tries left\n", count);
        scanf("%d", &gus_num);
        if (gus_num == rand_num) {
            printf("YOU WON!!\n");
            return;
        }
        else
        printf("YOU LOST!!\n");   
    }
    printf("--> Random number was: %d, better luck next time!!!\n", rand_num);
}

int main () {
    char playernum;
    while (1) {
        printf("\n----Main Menu----\n1.begin game 2.exit\nenter your choice\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1: {
                printf("r u a new or old player\nenter 'n' for new player and 'o' for old player\n");
                scanf(" %c", &playernum);
                if (playernum == 'n') {
                    newPlayer();
                    game();
                }
                else 
                    game();
                break;
            }
            case 2: exit(0);
            default: printf("enter valid choice\n");
                break;
        }    
    }
    return 0;
}



// printf("\n----o/p----\ndetails are-->\nname: %s\nsem: %s\ngmail: %s\nphone no: %s\nrandom number was: %d\n", name, sem, gmail, ph, rand_num); 