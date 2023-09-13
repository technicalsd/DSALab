// Write a C program to find out the size of variables of different data types (use sizeof()
// operator) and display their size as output.

#include <stdio.h>

int main(){
    int a;
    long int b;
    long long int c;
    signed int d;
    float e;
    double f;
    char g;
    long double h;
    
    printf("%ld \n",sizeof(a));
    printf("%ld \n",sizeof(b));
    printf("%ld \n",sizeof(c));
    printf("%ld \n",sizeof(d));
    printf("%ld \n",sizeof(e));
    printf("%ld \n",sizeof(f));
    printf("%ld \n",sizeof(g));
    printf("%ld \n",sizeof(h));

    return 0;
}
