#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>


int main () {
    char ph[30], temp;
    int i;
    printf("enter phone no: ");
    scanf("%s", ph);

    
    for(i=0; ph[i]!='\0'; i++) {
        temp=ph[i];
        if(isdigit(temp))
                printf(" %c", ph[i]);
    }

    /* or just
    printf("enter phone no: ");
    for(i=0; i<10; i++)
        scanf(" %c", &ph[i]);
    */

    printf("\n");
    return 0;
}