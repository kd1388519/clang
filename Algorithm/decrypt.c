#include <stdio.h>
main()
{
	char i, s[6];
	printf("�Í�����������͂��Ă�������");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]--;
	}

	printf("�������������,%s\n", s);

}