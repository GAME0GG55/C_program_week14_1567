#include<stdio.h>
int testPointerByPointers()
{
    int *pc,*pa, c,d,e;
    float *pa, e;
    c =5;
    d = -15;
    e = 20.5;
    
    pc = &c;
    printf("%d", *pc); // > 5
    pc = &d;
    printf("%d", *pc); // > -15
    pa = &e;
    printf("%d", *pa); // > 20.5
    return 0;
}
