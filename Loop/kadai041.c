#include <stdio.h>
main()
{
	int a ,b,d;
	b = 0;
	d = 0;
	printf("����(-999�ŏI��)?");
	scanf("%d", &a);
	while (a != -999) 
	{
		b += a;
		d++;
		printf("����(-999�ŏI��)?");
		scanf("%d", &a);
	}
	printf("���v = %d",b);
	printf("���ς� = %.2f",(float)b/d);
}