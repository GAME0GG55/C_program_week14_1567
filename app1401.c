#include<stdio.h>
int testPointerAddress()
{
    int vara = 5, varb = 10;
    printf("var: %d\n",vara); //var:5
    printf("var: %d\n",varb); //var:10
    
    printf("Address of var: %p", &vara); //Adderss of var :0061FEFC
    printf("Address of var: %p", &varb); //Adderss of var :0061FEF8
    return 0;
}