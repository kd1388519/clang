#include <stdio.h>
void g(int x, int y, int* go, int* he);
main()
{
	int a,b,c,d;
	printf("整数を２つ入力:");
		scanf("%d%d", &a, &b);
		g(a, b, &c, &d);
		printf("合計は%d,平均は%.2f\n", c, d);
}
void g(int x, int y, int* go, int* he)
{
	*go = x + y;
	*he = (float)*go / 2;
}
