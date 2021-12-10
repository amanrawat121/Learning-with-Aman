#include <stdio.h>
int main()
{
    int a, *ptr;
    a= 10;
    *ptr = &a;
    printf("%p", *ptr);
    return 0;
}
