#include <stdio.h>
main()
{
	int yar;
	printf("西暦を入力:");
	scanf("%d", &yar);
	if (yar >= 1989)
	{
		printf("平成生まれ");
	}
	else
	{
		printf("平成生まれではない");
	}
}