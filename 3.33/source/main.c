#include <stdio.h>
#include <stdlib.h>

char sign = '+';
char sign2 = ' ';
int i, j,lth,wth;

int main(void)
{
	printf("Enter length:");
	scanf("%d", &lth);
	printf("Enter width:");
	scanf("%d", &wth);
	for (i = 0; i < lth; i++)
	{
		for (j = 0; j < wth; j++)
		{
			if ((i == 0) || (i == lth-1) || (j == 0) || (j == wth-1))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
	