#include <cs50.h>
#include <stdio.h>

int main(void)
{	int height, i, j, k;
	
   do
	{
	  height = get_int("Height:");
	}
	while(height <= 0 || height > 8);
    
	for (i = 1; i <= height; i++)
	{
		for (j = i; j < height; j++)
		{
			 printf(" ");
		}
			   
		  for (k= 1; k <= i; k++)
			{
			 printf("#");
	    	}
	    	printf("\n");
	}
}