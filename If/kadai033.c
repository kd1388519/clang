#include <stdio.h>
main() 
{
	char a;
	printf("アルファベット?");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z')
	{
		printf("アルファベットは大文字です");
	}
	else if(a >= 'a' && a <= 'z')
	{
		printf("アルファベットは小文字です");
	}
}