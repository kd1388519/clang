#include <stdio.h>
void g(int x, int y, int* go, int* he);
main()
{
	int a,b,c,d;
	printf("�������Q����:");
		scanf("%d%d", &a, &b);
		g(a, b, &c, &d);
		printf("���v��%d,���ς�%.2f\n", c, d);
}
void g(int x, int y, int* go, int* he)
{
	*go = x + y;
	*he = (float)*go / 2;
}
