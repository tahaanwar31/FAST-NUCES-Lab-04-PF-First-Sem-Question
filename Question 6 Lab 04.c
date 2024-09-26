#include <stdio.h>
#include  <conio.h>
int main()
{
	float actualamount,savedamount,amountafterdiscount;
	printf("Enter the total cost\n");
	scanf("%f",&actualamount);
	if (actualamount<500.0)
	{
		printf("Discount is only available if total cost is atleast 500 \n");
		printf("The actual amount is: %f\n",actualamount);
		printf("The saved amount is: %f\n",savedamount);
		printf("The amount after discount is: %f\n",amountafterdiscount);
	}
	else if(actualamount>=500.0 && actualamount<2000.0)
	{
		amountafterdiscount=actualamount*0.95;
		savedamount=actualamount-amountafterdiscount;
		printf("The actual amount is: %f\n",actualamount);
		printf("The saved amount is: %f\n",savedamount);
		printf("The amount after discount is: %f\n",amountafterdiscount);
	}
	else if(actualamount>=2000.0 && actualamount<=4000.0)
	{
		amountafterdiscount=actualamount*0.90;
		savedamount=actualamount-amountafterdiscount;
		printf("The actual amount is: %f\n",actualamount);
		printf("The saved amount is: %f\n",savedamount);
		printf("The amount after discount is: %f\n",amountafterdiscount);
	}
	else if(actualamount>4000.0 && actualamount<=6000.0)
	{
		amountafterdiscount=actualamount*0.80;
		savedamount=actualamount-amountafterdiscount;
		printf("The actual amount is: %f\n",actualamount);
		printf("The saved amount is: %f\n",savedamount);
		printf("The amount after discount is: %f\n",amountafterdiscount);
	}
	else if(actualamount>6000.0)
	{
		amountafterdiscount=actualamount*0.65;
		savedamount=actualamount-amountafterdiscount;
		printf("The actual amount is: %f\n",actualamount);
		printf("The saved amount is: %f\n",savedamount);
		printf("The amount after discount is: %f\n",amountafterdiscount);
	}
	return 0;
}