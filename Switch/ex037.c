#include <stdio.h>
main()
{
	char c;
	printf("���Z�q������:");
	scanf ("%c", &c);
	switch(c)
	{
	case '+':
		printf("���Z�ł�");
		break;
	case '-' :
		printf("���Z�ł�");
		break;
	case'*' :
		printf("��Z�ł�");
		break;
		case ' / ' :
			printf("���Z�ł�");
		break;
		case' % ': 
		printf("���܂�ł�");
		break;
	default:
		printf("���̑��ł�");
	}
}