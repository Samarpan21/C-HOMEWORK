#include <stdio.h>
void main()
{

    int i = 1, value = 0, n = 0;
    printf("enter any number which you want to find out the Multiplication Table for ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        value = value + n;
        printf("%d * %d = %d \n", n, i, value);
    }
}