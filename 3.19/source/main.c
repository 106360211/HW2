#include <stdio.h>
#include <stdlib.h>

float lp,ir,ic;
int days;

int main(void)
{
	do
	{
		printf("Enter loan principal (-1 to end):");
		scanf("%f",&lp);
		if (lp != -1)
		{
			printf("Enter interest rate:");
			scanf("%f", &ir);
			printf("Enter term of the loan in days:");
			scanf("%d", &days);
			ic = lp*ir*days/365;
			printf("The interest charge is :%f\n\n",ic);
		}
		else
		{
			break;
		}
	} while (1);

	system("pause");
	return 0;
}