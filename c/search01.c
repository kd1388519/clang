#include <stdio.h>
main()
{
	int i, s, d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++);
	{
		printf("%o2d", d[i]);
	}
	printf("\n�T���n����͓��͂��Ă�������\n");
	scanf("%d", &s);
	i = 0;
	while (i < 10) {
		if (s == d[i])break;
		i++;
	}
	if (i >= 10)
	{
		printf("\n������Ȃ�����\n");
	}
	else {
		printf("�z���%d�ԖڂɌ�������", i);
	}
}