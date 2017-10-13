#include <stdio.h>
#include <stdlib.h>

int i, j, k;

int main(void)
{
	printf("斜邊\t臨邊\t對邊\t\n");
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				if ( i*i == j*j + k*k )
				{
					
					printf("%d\t%d\t%d\t\n",i,j,k);
				}
			}
		}
	}

	system("pause");
	return 0;
}