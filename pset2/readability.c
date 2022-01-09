#include <stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	string Text;
	int i, index, n, sentence = 0, letters = 0, words = 0;
	float S, L;
	Text = get_string("Text:");
	n = strlen(Text);

   for(i = 0; i < n; i++)
	{
		if(isalpha(Text[i]))
		{
			letters++;
		}
		if(i == 0 || isspace(Text[i]))
		{
			words++;
		}
			if(Text[i] == '!' || Text[i] == '.' || Text[i] == '?' )
		{
			sentence++;
		}
	}

     L = (letters / (float) words) * 100;
     S = ( sentence / (float) words) * 100;
     index = round(0.0588 * L - 0.296 * S - 15.8);

    if(index < 1)
    {
    printf("Before Grade 1\n");
	}
     else if(index >= 16)
    {
    printf("Grade 16+\n");
	}
	else
    {
    printf("Grade %d\n",index);
	}
     
	return 0;
}