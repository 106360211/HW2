#include <stdio.h>
#include <stdlib.h>

int acn;
float bgb, ttcg, ttcd, cdl;
int main(void)
{
	do
	{   
		printf("Enter account number (-1 to end):");
		scanf("%d",&acn);
		if (acn != -1)
		{
			printf("Enter beginning balance :");
			scanf("%f", &bgb);
			printf("Enter total charges :");
			scanf("%f", &ttcg);
			printf("Enter total credits :");
			scanf("%f", &ttcd);
			printf("Enter credits limit :");
			scanf("%f", &cdl);
			bgb = bgb + ttcg - ttcd;
			if (bgb > cdl)
			{
				printf("Account:\t%d\n", acn);
				printf("Credit limit:\t%f\n", cdl);
				printf("Balance:\t%f\n", bgb);
				printf("Credit Limit Exceeded.\n");
			}
			printf("\n");
		}
		else
		{
			break;
		}
	}while (1);

	system ("pause");
	return 0;
}