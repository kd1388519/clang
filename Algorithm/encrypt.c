#include <stdio.h>
main()
{
	char i, s[6];
	printf("���������͂��Ă�������");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]++;
	}

	printf("�Í����������,%s\n", s);

}