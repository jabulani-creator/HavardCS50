#include<stdio.h>
#include<math.h>
#include<cs50.h>


int main(void)
{

	float change;
	int i, count=0, cents, coins[]={25,10,5,1};
	do
	{
        change = get_float("change owed:");
	}while(change<=0);

   cents =round(change * 100);

    for (i = 0; i < 4; i++)
    {
       count  += (cents / coins[i]);
       cents =( cents % coins[i]);
	}


   printf("%d coins required\n",count);

}