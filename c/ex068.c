#include <stdio.h>
main()
{
	int c;
	char dumy[256];

	c = getchar();//����
	while (c != EOF) {//EOF�f�[�^�̏I����
		putchar(c);
		putchar('\n');
		gets (dumy);//�f�[�^�����߂郁����
		c = getchar();//����
	}
}