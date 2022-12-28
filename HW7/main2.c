/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    double pi = 4.0;
    int flag = 1;
    long ipi = 0;
    int x = 0;
    for(int i = 3; i <= 1000000; i += 2){
        if(flag == 0){
            pi +=(4.0/i);
            flag++;
        } else {
            pi -=(4.0/i);
            flag--;
        }
        ipi = pi * 100000;
        if (ipi == 314159) {
            x = i;
            break;
        }
    }
    printf("%d ", x);

    return 0;
}
