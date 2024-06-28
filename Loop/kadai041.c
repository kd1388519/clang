#include <stdio.h>
main()
{
	int a ,b,d;
	b = 0;
	d = 0;
	printf("®”(-999‚ÅI—¹)?");
	scanf("%d", &a);
	while (a != -999) 
	{
		b += a;
		d++;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &a);
	}
	printf("‡Œv = %d",b);
	printf("•½‹Ï‚Í = %.2f",(float)b/d);
}