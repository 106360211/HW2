#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double amount;
double principal = 5000.00;
double rate;
double year = 15.00;

int main(void)
{
	printf("%8s%21s\n","Rate","Amount on deposit");
	for (rate = .1; rate < .125; rate += .005)
	{
		amount = principal*pow(1.0 + rate, year);
		printf("%8f%21.2f\n",rate,amount);
	}

	system("pause");
	return 0;
}


