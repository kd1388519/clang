#include <stdio.h>
main()
{
	char i, s[6];
	printf("ˆÃ†‰»•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]--;
	}

	printf("•œ†‰»•¶š—ñ‚Í,%s\n", s);

}