#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int rand_num;
    srand(time(0));
    rand_num = rand() % 11;
    printf("generated random no is: %d\n", rand_num);
    return 0;
}