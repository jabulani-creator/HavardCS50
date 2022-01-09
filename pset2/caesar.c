#include <stdio.h>
#include<ctype.h>
#include<cs50.h>
#include <stdlib.h>
#include<string.h>

bool check_valid_key(string s);

int main(int argc, string argv[]) 
{	int i, n, key;
	string plaintext; 
	if(argc != 2 || !check_valid_key(argv[1]))
	{
		printf("Usage: ./Ceaser key\n");
		return 1;
	}
	
	key = atoi(argv[1]);
	
	plaintext = get_string("Plaintext: ");
	n = strlen(plaintext);
	
	printf("ciphertext: ");
    for(i = 0;i < n; i++)
	{
		char c = plaintext[i];
		if(isalpha(c))
		{
			char m = 'A';
			if(islower(c))
			 m = 'a';
			 printf("%c",(c - m + key) % 26 + m);
		}
		else
		{
				printf("%c",c);
		}
	
	}
		printf("\n");
}
	bool check_valid_key(string s)
	{ 
			for(int i = 0,n =strlen(s) ;i < n; i++)
				 if(!isdigit(s[i]))	
				 	return false;
		        return true;
		
	}