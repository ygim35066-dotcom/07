#include <stdio.h>

int i; 

void f(void);

int main(void)
{
    for (i = 0; i < 5; i++)
    {
        f();
    }
    return 0;
}

void f(void)
{
    for (int j = 0; j < 10; j++) 
    {
        printf("#");
    }
    printf("\n");
}