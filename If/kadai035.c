#include <stdio.h>
main()
{
	int a;
	printf("整数？");
	scanf("%d", &a);
	if (a>=0)
	{
		printf("入力値はプラスです");
	}
	else if (a<=0)
	{
		printf("入力値はマイナスです");
	}
}