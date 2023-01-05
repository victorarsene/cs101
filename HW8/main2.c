
#include <stdio.h>

int main()
{
    int n = 7;
    int count = 0;
    do {
        if (n&1){
            count++;
        }
    } while ((n>>=1)!=0);
    printf("count = %d\n", count);

    return 0;
}
