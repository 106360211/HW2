#include <stdio.h>
#include <stdlib.h>

int hours;
float rate,sal;

int main(void)
{
	do
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf("%d",&hours);
		if (hours != -1)
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf("%f", &rate);
			if (hours>40)
			{
				sal = (hours - 40)*1.5*rate + 40 * rate;
			}
			else
			{
				sal = hours*rate;
			}
			printf("Salary is :%f\n\n",sal);
		}
		else
		{
			break;
		}

	} while (1);




	system("pause");
	return 0;
}