#include <stdio.h>
#include <stdlib.h>

int i,j,k,l,m;


int main(void)
{ 
	for (i = 1; i < 10;i++)
	{
		if ((i == 1) || (i == 9))
		{
			l = 4; //�Ů�
			m = 1; //�P�P
		}
		else if ((i == 2) || (i == 8))
		{
			l = 3; //�Ů�
			m = 3; //�P�P
		}
		else if ((i == 3) || (i == 7))
		{
			l = 2; //�Ů�
			m = 5; //�P�P
		}
		else if ((i == 4) || (i == 6))
		{
			l = 1; //�Ů�
			m = 7; //�P�P
		}
		else  
		{
			l = 0; //�Ů�
			m = 9; //�P�P
		}
		for (j = 1; j <= l; j++)
		{
			printf("%s", " ");
		}
		for (k = 1; k <= m;k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	

	
	system("pause");
	return 0;
}