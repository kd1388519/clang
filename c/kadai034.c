#include <stdio.h>
main()
{
	char a;
	printf("1��������?");
	scanf("%c", &a);
	if (a <= 'A' && a >= 'Z')
	{
		printf("�啶���ł�");
	}
	else if (a <= 'a' && a >= 'z')
	{
		printf("�������ł�");
	}
	else
	{
		printf("ERROR");
	}
}