#include<stdio.h>
int testPointerAdderss()
{
    int *pc, c;
    c = 22;
    printf("Address of c:p\n", &c); // Address of c:0061FEFC
    printf("Value of c:%d\n", c);    // 22

    pc = &c;
    printf("Address of pointer pc: %p\n", pc); // Address of c: 0061FEFC
    printf("Address of pointer pc: %p\n", *pc); // Address of c: 22

    c = 11;
    printf("Address of pointer pc: %p\n", pc); // Address of pc: 0061FEFB
    printf("Address of pointer pc: %p\n", *pc); // Address of pc: 11

    *pc = 2;
    printf("Address of c:%p\n", &c); // Address of pointer c: 0061FEFB
    printf("Value of c:&d\n\n", c); // Address of pc: 11
}
