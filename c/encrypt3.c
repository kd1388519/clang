#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i, k[30];
	char s[30];

	printf("文字列を入力してください");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++)
	{
		//復号化キーの入力
		printf("s[%d]の復号化キー>", 1)
			scanf("%d", &k[i]);
		//求めた乱数で暗号化
		s[i] += k[i];
	}
	printf("暗号化文字列は,%s\n", s);
	printf("暗号化キーは");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
}
