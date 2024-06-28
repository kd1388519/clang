#include <stdio.h>
main()
{
	char a;
	printf("1•¶š“ü—Í?");
	scanf("%c", &a);
	if (a <= 'A' && a >= 'Z')
	{
		printf("‘å•¶š‚Å‚·");
	}
	else if (a <= 'a' && a >= 'z')
	{
		printf("¬•¶š‚Å‚·");
	}
	else
	{
		printf("ERROR");
	}
}