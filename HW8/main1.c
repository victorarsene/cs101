
#include <stdio.h>

void print_spec(int i, int rows){
    for (int j=i; j<rows; j++){
        printf(" ");
    }
}

void print_stars(int i) {
    for (int j=0; j<i*2+1; j++){
        printf("*");
    }
}

int main(){
    int rows = 10;
    for (int i = 0; i<=rows; i++){
        print_spec(i, rows);
        print_stars(i);
        printf("\n");
    }

    return 0;
}
