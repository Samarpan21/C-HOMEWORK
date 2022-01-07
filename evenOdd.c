#include <stdio.h>
void main()
{
    int num = 0;
    printf("enter any number to check whether its even or odd ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is a even number ", num);
    }
    else
    {
        printf("%d is a odd number ", num);
    }
}