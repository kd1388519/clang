#include <stdio.h>
main()
{
	char a;
	printf("1文字入力?");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z')
	{
		printf("変更結果は%c", a + 32);
	}
	else
	{
		if (a>='a'&&a<='z')
		{
			printf("変更結果は%c", a - 32);
		}
		else
		{
			printf("%c", a);
		}
	}
}