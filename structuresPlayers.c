#include<stdio.h>
#include<string.h>
int n, i;

struct newPlayer
{
    char name[20];
    char gmail[20];
    char sem[3];
    int ph[10];
};
struct newPlayer p[20];

void players () {
    printf("enter the name, sem, gmail, ph of player no. %d\n", i+1);
    scanf("%s%s%s%d", p[i].name, p[i].sem, p[i].gmail, &p[i].ph);
}

int main(){
    
    printf("enter total no of players:\n");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        players();  
    }
    printf("\n----o/p----\n");
    for (i=0; i<n; i++) {
        printf("player %d: name: %s, sem: %s, gmail: %s, ph: %d\n", i, p[i].name, p[i].sem, p[i].gmail, p[i].ph);
    }
    return 0;
}
