#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i, k[30];
	char s[30];

	printf("���������͂��Ă�������");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++)
	{
		//�������L�[�̓���
		printf("s[%d]�̕������L�[>", 1)
			scanf("%d", &k[i]);
		//���߂������ňÍ���
		s[i] += k[i];
	}
	printf("�Í����������,%s\n", s);
	printf("�Í����L�[��");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
}
