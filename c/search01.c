#include <stdio.h>
main()
{
	int i, s, d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++);
	{
		printf("%o2d", d[i]);
	}
	printf("\n探索地を入力入力してください\n");
	scanf("%d", &s);
	i = 0;
	while (i < 10) {
		if (s == d[i])break;
		i++;
	}
	if (i >= 10)
	{
		printf("\n見つからなかった\n");
	}
	else {
		printf("配列の%d番目に見つかった", i);
	}
}