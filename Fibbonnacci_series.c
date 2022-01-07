#include <stdio.h>

void main()
{
	int a = 0, b = 1, value = 0, userInput = 0, i = 0, j = 0;
	printf("enter the term upto which you want to see the fibbonacci series ");
	scanf("%d", &userInput);
	value = a + b;
	printf("%d %d %d ", a, b, value);
	value = value + b;
	printf("%d ", value);
	for (i = 0; i < (userInput - 4); i++)
	{
		a = b;
		b = value;
		value = a + b;
		printf("%d ", value);
	}
}
