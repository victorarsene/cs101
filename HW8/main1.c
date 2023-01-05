
#include <stdio.h>

void print_spec(int i, int n){
    for (int j=i; j<n; j++){
        printf(" ");
    }
}

void print_stars(int i) {
    for (int j=0; j<i*2+1; j++){
        printf("*");
    }
}

int main(){
    int n = 5;
    for (int i = 0; i<=n; i++){
        print_spec(i, n);
        print_stars(i);
        printf("\n");
    }

    return 0;
}
