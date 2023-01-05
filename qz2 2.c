#include <stdio.h>
int rows = 5;
void printSpaces(int r,int rows){
    for(int i=r; i<rows; i++){
        printf("  ");
    }
}

void printStars(int r){
    for(int i=0; i<r*2-1; i++){
        printf("* ");
    }
    printf("\n");
}

int main()
{
    int rows = 5;
    for(int i = rows; i >= 1; i--){
        printSpaces(i,rows);
        printStars(i);
    }

    return 0;
}
