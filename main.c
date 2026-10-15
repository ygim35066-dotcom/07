#include <stdio.h>

static int all_files;
extern void sub(void);

int main(void)
{
    sub();
    printf("all_files = %d\n", all_files);
    
    return 0;
}