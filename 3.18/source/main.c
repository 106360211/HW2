# include <stdio.h>
# include <stdlib.h>

float sd,sal;

int main(void)
{
	do
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf("%f",&sd);
		if (sd != -1)
		{
			sal = sd*0.09 + 200;
			printf("Salary is:%f\n\n", sal);
		}
		else
		{
			break;
		}
	} while (1);


	system("pause");
	return 0;
}