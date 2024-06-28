#include <stdio.h>
main()
{
	int c;
	char dumy[256];
	char data,data2;//“ü—Í—p

	c = scanf("%c%c",&data,&data2);//“ü—Í

	while (c != EOF) 
	{
		printf("%d", c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c",&data,&data2);//“ü—Í
	}

	printf("%d\n", printf("HELLO"));
	printf("%d\n", printf("‚±‚ñ‚É‚¿‚Í"));

}