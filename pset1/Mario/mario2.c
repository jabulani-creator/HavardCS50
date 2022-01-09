#include<stdio.h>
#include<cs50.h>

int main(void)
{
	int height,i,j,k,l,M;
	do
	{
	  height = get_int("Height:");

	}while(height<1 || height>8);

	for(i=height;i>=1;i--)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
	    	for(k=i;k<=height;k++)
			{
			 printf("#");
	    	}
					for(M=1;M<=2;M++)
					{
						printf(" ");
					}
			    for(l=i;l<=height;l++)
				{
					printf("#");
				}
		printf("\n");
   }

	return 0;
}