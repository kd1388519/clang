#include <stdio.h>
main()
{
	int d;
	printf("���������:");
	scanf("%d", & d);
	switch (d / 10)
	{
	case 1:
		printf("�P�O�_��");
		break;
	case 2:
		printf("20�_��");
		break;
	case 3:
		printf("30�_��");
		break;
	case 4:
		printf("40�_��");
		break;
	default:
		printf("�G���[�ł�");
	}
}