#include <stdio.h>
void g(int x, int y, int* go, int* he);
main()
{
	int a,b,c,d;
	printf("®”‚ğ‚Q‚Â“ü—Í:");
		scanf("%d%d", &a, &b);
		g(a, b, &c, &d);
		printf("‡Œv‚Í%d,•½‹Ï‚Í%.2f\n", c, d);
}
void g(int x, int y, int* go, int* he)
{
	*go = x + y;
	*he = (float)*go / 2;
}
