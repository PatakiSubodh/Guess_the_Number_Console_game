/*------------------------------------ ITERATION PGM ------------------------------------*/
/*----------------------------------------IdeaBox----------------------------------------*/
/*
-> ideas for others languages
-> for new player it's taking old data(check tht, it should reset to 0 for newPlayer), 
->for old player pgm such tht it asks player num or player name or ph last num so to check the data and set accordingly, 
-> if more than one players display winner in front of the player or in a seprate box,
-> printf("play 1. 1v1 2. 1vcomputer\n"); befofe menu if(input==1) then present main menu
-> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|
-> if won - 🎊🎉                                                   
->  printf("A random number is generated-- %d\tu've only 3 / ♥♥♥ tries\n", rand_num);
-> if anyone loose 1st time - 💀 / ♥♥, 2nd time - ☠ / ♥, 3rd time - 👻/ no heart    
-> in scoreBoard if lost game - 🤢🤢🤮🐷                             
-> in scoreBoard if winner - 🦊🧠                                  
-> also use - 🤨😮🙄 unicode(\u1F494)~\u=> unicode escape sequence 
-> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|
-> ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|
-> in oldPlayer => printf("who r u??😒\t enter no only🤨\n");    
-> in game function => printf("game (%d)🙈\n", in+1);
->         
*/
/* ---------------------------------------------------------------------- */
/* old player thing done. ONLY THING REMAINING IS DELETION OF PLAYER DATA */
/* ---------------------------------------------------------------------- */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<wchar.h>
int op, rand_num, gus_num, playerNum=0, in=0;

struct newPlayer {
    char name[10], sem[3], gmail[20], ph[10];
    int pnts;
};
struct newPlayer p[10];

void game();
void newPlayer();
// void totalPnts();
void scoreBoard();
// void deletePlayer();

int main () {
    int playerType=0, ch=0, n=0;
    while (1) {
        
        printf("\n----Main Menu----\n1.Begin Game 2.dispaly scoreBoard 3.Exit\nenter your choice\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1: {
                printf("- r u a new or old player\nenter 1.for new 2.for old\n");
                scanf("%d", &playerType);
                // switch (playerType){
                //     case 1: {
                //         printf("- enter total no of players\n");
                //         scanf("%d", &playerNum);
                //         for(in=0; in<playerNum; in++) 
                //             newPlayer();
                //     }
                //     break;

                //     case 2:{
                //         int oldPlayerNum=0, newPnt=0, con_del=0, deletePlayer_Num=0, pos=0;
                //         // char  deletedPlayer;
                //         /* 888888888888 */ 
                //         if (playerNum=='\0')
                //             printf("NO player data available!!\n");
                //         else {
                //             printf("enter 1.to continue 2.delete player\n");
                //             // copy the whole array of player details. the only you can add newPnts to oldPnts ( NO NEED TO DO THIS!!!!!!!!!!!! )
                //             scanf("%d", &con_del);

                //             // this switch is used instead of if_else( for this see below this switch case )
                //             // check whether using switch is good or else_if statements-> 
                //             switch(con_del){
                //                 // this case continues ( not deletetion of players )
                //                 case 1:{
                //                     for (in=0; in<playerNum; in++)
                //                     printf("player no: %d -> name: %s\n", in+1, p[in].name);
                //                     printf("who r u??\t enter no only\n");
                //                     // scanf("%d", &oldPlayerNum);
                //                     scanf("%d", &in);
                //                     printf("n: %s. old player pnts: %d\n", p[in-1].name, p[in-1].pnts);
                //                     game();
                //                     // newPnt = newPnt + p[in].pnts;
                //                     // printf("newPNT = %d\n", newPnt);
                //                 }
                //                 break;

                //                 // this case deletes the player from array
                //                 case 2:{
                //                     int count=0;
                //                     for(in=0; in<playerNum; in++){
                //                         printf("player num: %d -> name: %s\n", in+1, p[in].name);
                //                         // scanf("%d", &);
                //                         count++;
                //                     }
                //                     printf("total number of players: %d\n", count);
                //                     printf("enter player number to delete:\n");
                //                     scanf("%d", &deletePlayer_Num);
                //                     if (deletePlayer_Num>count)
                //                     printf("enter valid position\n");
                //                     else{
                //                         char *deletedPlayer = p[deletePlayer_Num-1].name; 
                //                         for(int i=deletePlayer_Num-1; i<count; i++)
                //                         p[i] = p[i+1];
                //                         count-=1;
                //                         printf("deleted player name: %s\n", deletedPlayer);
                //                     }

                //                     // deletedPlayer = p[deletePlayer_Num-1].name;
                //                     // printf("deleted player name: %s\n", p[deletePlayer_Num-1].name);
                //                     // printf("deleted player name: %s\n", deletedPlayer);
                //                 }
                //                 break;
                                
                //                 default: printf("invalid!!\n");
                //             }
                            
                //         }
                //     }
                //     break;

                //     default: printf("Invaild number!!\n");
                // }

                // without switch case: ->
                if (playerType == 1) {
                    printf("- enter total no of players\n");
                    scanf("%d", &playerNum);
                    for(in=0; in<playerNum; in++) {
                        newPlayer();
                    }
                }
                else {
                    int oldPlayerNum=0, newPnt=0;
                    /* 888888888888 */ 
                    if (playerNum=='\0')
                        printf("NO player data available!!\n");
                    else {
                        // copy the whole array of player details. the only you can add newPnts to oldPnts ( NO NEED TO DO THIS!!!!!!!!!!!! )
                        for (in=0; in<playerNum; in++)
                        printf("player no: %d -> name: %s\n", in+1, p[in].name);
                        printf("who r u??\t enter no only\n");
                        // scanf("%d", &oldPlayerNum);
                        scanf("%d", &in-1);
                        printf("n: %s. old player pnts: %d\n", p[in-1].name, p[in-1].pnts);
                        game();
                        // newPnt = newPnt + p[in].pnts;
                        // printf("newPNT = %d\n", newPnt);
                    }
                    printf("Invalid!!\n"); 
                }
            }
            break;

            case 2: scoreBoard();
            break;

            case 3: {
                printf(" %c %c %c\n", 1, 3, 4);
            }
            exit(0);
            default: printf("invalid!!!\n");
            break;    
        }
    }
    return 0;
}

void newPlayer () {
    printf("\n-> enter the name, sem, gmail, phome no of player no. %d:\n", in+1);
    scanf("%s%s%s%s", p[in].name, p[in].sem, p[in].gmail, p[in].ph);
    int pnts=0;
    game();
}

void game () {
    int  count=3, i, pnts;
    srand(time(0));
    rand_num = rand() % 11;

    printf("A random number is generated- %d\tu've only %c %c %c tries\n", rand_num, 3,3,3);
    printf("game(%d)\n", in+1);
    for (i=1; i<4; i++) { 
        count--;
        printf("\nguess the number:\n");
        scanf("%d", &gus_num);
        if (gus_num == rand_num) {
            p[in].pnts+=5;
            printf("YOU WON!!\n");
            printf("total pnts: %d\n", p[in].pnts);
            return;
        }
        else { 
            {
                if(count==2)
                printf("YOU LOST %c!!\tu've %d tries left\n", 3, count);  
                else if (count==1)
                printf("YOU LOST %c %c!!\tu've %d tries left\n", 3, 3, count);  
                else
                printf("YOU LOST %c %c %c!!\tu've %d tries left\n", 3, 3, 3, count); 
            }
            // or try this
            // printf("YOU LOST!!\tu've %d tries left\n", count);  
            p[in].pnts-=1;
            printf("total pnts: %d\n", p[in].pnts);
        }
    }
}

// void totalPnts () {
//     printf("total pnts: %d\n", pnts);
// }

void scoreBoard() {
    printf("\n----Score Board----\n\t\tname\tsem\tgmail\tph\tpnt\n");
    for(in=0; in<playerNum; in++) {
        printf("player no. %d:\t %s\t%s\t%s\t%s\t%d\n", (in+1), p[in].name, p[in].sem, p[in].gmail, p[in].ph, p[in].pnts);
    }
}