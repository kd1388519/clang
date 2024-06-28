#include <stdio.h>
int g(int a, int b, int c);
float h(int a, int b, int c);
main()
{
	int a, b, c, kotae;
	float kotae2;
	printf("®”‚ğ‚R‚Â“ü—Í");
	scanf("%d%d%d", &a,&b,&c);

	kotae = g(a,b,c);
	kotae2 = h(a,b,c);
	printf("‡Œv‚Í%d\t•½‹Ï‚Í%.2f\n",kotae,kotae2);
}
int g(int a, int b, int c)
{
	int su;
	su = a + b + c;
	return(su);
}
float h(int a, int b, int c)
{
	float su2;
	su2 = (a + b + c) / 3.0;
	return(su2);
}