#include <stdio.h>
#include <stdlib.h>

int class,s1,t,rate,m,e;
float s2, s3,p, s4;

int main(void)
{
	
	while (class != -1)
	{
		printf("��J���� 1.�g�z 2.���~�u 3.��Ī��u 4.�s�u (-1 to end): \n");
		scanf("%d", &class);
		switch (class)
		{
			case 1:
				printf("����:�g�z\n");
				printf("�g�~ : 1000 ����\n\n");
				break;

			case 2:
				printf("����:���~�u\n");
				printf("��J�u��:");
				scanf("%d", &t);
				printf("��J���~:");
				scanf("%d", &rate);
				if (t > 40)
				{
					s2 = (t - 40)*1.5*rate + 40 * rate;
				}
				else
				{
					s2 = t*rate;
				}
				printf("�g�~ :%f\n\n", s2);
				break;

			case 3:
				printf("����:��Ī��u\n");
				printf("���g�P����B:\n");
				scanf("%f", &p);
				s3 = p*.057 + 250;
				printf("�g�~ :%f\n\n", s3);
				break;

			case 4:
				printf("����:�s�u\n");
				printf("��J�Ͳ����:");
				scanf("%d", &m);
				printf("�C��S��:");
				scanf("%d", &e);
				s4 = m*e;
				printf("�g�~ :%f\n\n", s4);
				break;
		}	
	}
	system("pause");
	return 0;
}