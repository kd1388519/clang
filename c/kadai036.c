#include <stdio.h>
main()
{
	int a, b;
	printf("����1?");
	scanf("%d", &a);
	printf("����2?");
	scanf("%d", &b);
	if (a > b)
	{
		printf("%d�̕���%d���%d�傫��", a, b, a - b);
	}
	else 
	{
		if (a == b)
		{
			printf("%d��%d�͓�����", a, b);
		}
		else 
		{
			if (a < b)
			{
				printf("%d�̕���%d���%d������", a, b, b - a);
			}
		}
	}
}