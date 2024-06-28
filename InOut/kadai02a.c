#include <stdio.h>
main()
{
	double a,b;
	printf("2‚Â‚ÌÀ”’l?");
	scanf("%lf%lf",&a,&b);
	printf("\n***%.1f‚Æ%.1f‚Ìl‘¥‰‰Z***\n", a, b);
	printf("˜a = %f\t",a+b);
	printf("· = %f\t",a-b);
	printf("Ï = %f\t",a*b);
	printf("¤ = %f\n",a/b);
}