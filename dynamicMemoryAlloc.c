#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n, i;

struct newPlayer
{
    char name[20];
    char gmail[20];
    char sem[3];
    int ph[10];
    char info[30];
    struct node *link;
};
struct newPlayer p[20], *temp, *start, *ptr;

void players () {
    temp = (struct newPlayer*)malloc(sizeof(struct newPlayer));
    // printf("enter the name, sem, gmail, ph of player no. %d\n", i+1);
    // scanf("%s%s%s%d", p[i].name, p[i].sem, p[i].gmail, &p[i].ph);
    
    printf("enter the name of player no. %d\n", i+1);
    scanf("%s", &temp->info);
    temp->link = NULL;
    if(start == NULL)
        start=temp;
    else{
        ptr = start;
        while(ptr->link!=NULL){
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

void printing(){
    int c=0;
    ptr = start;
    while(ptr!=NULL){
        c++;
        printf("%s\t", ptr->info);
        ptr=ptr->link;
    }
    printf("total Py = %d\n", c);
}

int main(){
    int ui=0;
    // printf("enter total no of players:\n");
    // scanf("%d", &n);
    // for(i=0; i<n; i++) {
    //     players();  
    // }
    // printf("\n----o/p----\n");
    // for (i=0; i<n; i++) {
        // printf("player %d: name: %s, sem: %s, gmail: %s, ph: %d\n", i, p[i].name, p[i].sem, p[i].gmail, p[i].ph);
    // }
    printf("enter 1");
    scanf("%d", &ui);
    while(ui == 1){
        players();
    }

    printing();
    return 0;
}
