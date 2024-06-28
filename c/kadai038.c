#include <stdio.h>
main()
{
	char a;
	printf("1•¶Žš“ü—Í?");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z')
	{
		printf("•ÏXŒ‹‰Ê‚Í%c", a + 32);
	}
	else
	{
		if (a>='a'&&a<='z')
		{
			printf("•ÏXŒ‹‰Ê‚Í%c", a - 32);
		}
		else
		{
			printf("%c", a);
		}
	}
}