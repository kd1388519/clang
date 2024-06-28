#include <stdio.h>
main()
{
	int d;
	printf("整数を入力:");
	scanf("%d", & d);
	switch (d / 10)
	{
	case 1:
		printf("１０点台");
		break;
	case 2:
		printf("20点台");
		break;
	case 3:
		printf("30点台");
		break;
	case 4:
		printf("40点台");
		break;
	default:
		printf("エラーです");
	}
}