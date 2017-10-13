#include <stdio.h>
#include <stdlib.h>

int i,j,k,l,m;


int main(void)
{ 
	for (i = 1; i < 10;i++)
	{
		if ((i == 1) || (i == 9))
		{
			l = 4; //空格
			m = 1; //星星
		}
		else if ((i == 2) || (i == 8))
		{
			l = 3; //空格
			m = 3; //星星
		}
		else if ((i == 3) || (i == 7))
		{
			l = 2; //空格
			m = 5; //星星
		}
		else if ((i == 4) || (i == 6))
		{
			l = 1; //空格
			m = 7; //星星
		}
		else  
		{
			l = 0; //空格
			m = 9; //星星
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