#include <stdio.h>
main()
{
	int su1, su2, su3, g;
	float he;
	printf("������3����:");
	scanf("%d,%d,%d", &su1, &su2, &su3);
	g = su1 + su2 + su3;
	he = g / 3;
	printf("���v=%d\t ����=%.2f\n", g, he);
}