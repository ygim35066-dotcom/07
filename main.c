#include <stdio.h>

int inc(int counter);

int main(void)
{
    int i = 10;
    printf("Before function call i = %d\n", i);
    inc(i);
    printf("After function call i = %d\n", i); 
    
    return 0;
}

int inc(int counter)
{
    counter++;
    return counter;
}