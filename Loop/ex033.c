#include <stdio.h>
main()
{
	int  i, sum, num;
	i = 0;
	sum = 0;
	num = 0;
	do {
		sum += num;
		i++;
		printf("数は？");
		scanf("%d", &num);
	} while (num != -999);
	printf("合計=%d 平均 = .2f\n", sum, (float)sum / (i - 1));