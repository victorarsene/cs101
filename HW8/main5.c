#include <stdio.h>

void print_spec(int i, int n){
    for (int j=i; j<n-1; j++){
        printf(" ");
    }
}

void print_stars(int i) {
    for (int j=0; j<i*2+1; j++){
        printf("*");
    }
}


int main(){
    int n = 4;
    int high = 2*n-1;
    for (int i = 0; i<n; i++){
        print_spec(i, n);
        print_stars(i);
        printf("\n");
    }
    for(int i = 0;i<high;i++){
        printf("*");
    }
    printf("\n");
    
    for (int i = 0;i<n;i++){
        printf("*");
        for (int j = 0;j<high-2;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    
    for(int i = 0;i<high;i++){
        printf("*");
    }
    printf("\n");
    return 0;
}
