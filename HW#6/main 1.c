/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 5;
    if (i % 3==0 & i % 15 != 0)
        printf("Love");
    else if (i % 5 ==0 & i % 15 != 0)
        printf("IU");
    else if (i % 15 == 0)
        printf("Love IU");
    else
        printf("%d", i);

    return 0;
}
