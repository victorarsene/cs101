
#include <stdio.h>

int main()
{
    int n = 19;
    int x;
    int count = 0;
    for (int c = 31; c >= 0; c--){
        x = n >>c;
        
        if (x & 1){
            printf("1");
        }else {
            printf("0");
        }
        
        if(c%4 ==0){
            printf(" ");
        }
    }

    return 0;
}
