#include <stdio.h>
main()
{
	char a;
	printf("1��������?");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z')
	{
		printf("�ύX���ʂ�%c", a + 32);
	}
	else
	{
		if (a>='a'&&a<='z')
		{
			printf("�ύX���ʂ�%c", a - 32);
		}
		else
		{
			printf("%c", a);
		}
	}
}