#include <stdio.h>
main()
{
	int c;
	char dumy[256];

	c = getchar();//入力
	while (c != EOF) {//EOFデータの終わり方
		putchar(c);
		putchar('\n');
		gets (dumy);//データをためるメモリ
		c = getchar();//入力
	}
}