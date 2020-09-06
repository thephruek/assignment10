#include<stdio.h>
int main() {
	int number, i, j;
	printf("Enter number: ");
	scanf_s("%d", &number);
	for (j = 0; j < number; j++)
	{
		for (i = 0; i <= j; i++)
		{
			printf("%d ", i + 1);
		}
		printf("\n");
	}
	for (j = number - 1; j >= 0; j--)
	{
		for (i = 0; i < j; i++)
		{
			printf("%d ", i + 1);
		}
		printf("\n");
	}
	return 0;
}