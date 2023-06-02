#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int in=0, pnts,i, rand_num, gus_num, playnum, op;

void game();    
                                                        

int main () {
    while(1) {
        printf("----menu---\n1.start 2.exit\n");
        scanf("%d", &op);
        switch (op) {
            case 1: {
                printf("enter the total players\n");
                scanf("%d", &playnum);
                for (in=0; in<playnum; in++) {
                    game();
                }
            }
            break;
            case 2: exit(0);
        }
    }
    return 0;
}


void game() {
    srand(time(0));
    int i=0;
    rand_num = rand() % 100;
    
    printf("\n=>game of player %d\n", in+1);
    printf("A random number is generated-- %d\tyou have only 3 tries\n", rand_num);

    for (i=0; i<3; i++) {
        printf("\nguess the number:\n");
        scanf("%d", &gus_num);
        if (gus_num == rand_num) {
            printf("u won!!\n");
            return;
        }
        printf("u loose!!\n");
    }
    
    // if (gus_num == rand_num) {
    //         printf("YOU WON!!\n");
    //         return;
    //     }
    // printf("YOU LOST!!\tyou have tries left\n");

    // for (i=1; i<4; i++) {
    //     count--;
    //     printf("\nguess the number:\n");
    //     scanf("%d", &gus_num);
    //     if (gus_num == rand_num) {
    //         pnts+=5;
    //         printf("YOU WON!!\n");
    //         return;
    //         // str = "YOU WON!!";
    //         // totalPnts();
    //     }
        
    //         printf("YOU LOST!!\tyou have tries left\n");  
    //         pnts-=1;
    //         // totalPnts();
        
    //            // if(str == "YOU WON!!") {
    //     //     newPlayer();
    //     // }
    // }
}

