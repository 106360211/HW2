#include <stdio.h>
#include <stdlib.h>

int class,s1,t,rate,m,e;
float s2, s3,p, s4;

int main(void)
{
	
	while (class != -1)
	{
		printf("輸入階級 1.經理 2.時薪工 3.抽傭金工 4.零工 (-1 to end): \n");
		scanf("%d", &class);
		switch (class)
		{
			case 1:
				printf("階級:經理\n");
				printf("週薪 : 1000 美元\n\n");
				break;

			case 2:
				printf("階級:時薪工\n");
				printf("輸入工時:");
				scanf("%d", &t);
				printf("輸入時薪:");
				scanf("%d", &rate);
				if (t > 40)
				{
					s2 = (t - 40)*1.5*rate + 40 * rate;
				}
				else
				{
					s2 = t*rate;
				}
				printf("週薪 :%f\n\n", s2);
				break;

			case 3:
				printf("階級:抽傭金工\n");
				printf("本週銷售金額:\n");
				scanf("%f", &p);
				s3 = p*.057 + 250;
				printf("週薪 :%f\n\n", s3);
				break;

			case 4:
				printf("階級:零工\n");
				printf("輸入生產件數:");
				scanf("%d", &m);
				printf("每件酬勞:");
				scanf("%d", &e);
				s4 = m*e;
				printf("週薪 :%f\n\n", s4);
				break;
		}	
	}
	system("pause");
	return 0;
}