#include <stdio.h>
main()
{
	char i, s[6];
	printf("暗号化文字を入力してください");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]--;
	}

	printf("復号化文字列は,%s\n", s);

}