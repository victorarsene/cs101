/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int two(int num){
    if ((num & (num - 1)))
        return -1;
    return 1;
}

int main(){
    int i = 10;
    if (two(i)==1)
        printf("%d is true\n", i);
    else 
        printf("%d is false\n", i);
    return 0 ;
    
}
