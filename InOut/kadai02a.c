#include <stdio.h>
main()
{
	double a,b;
	printf("2�̎����l?");
	scanf("%lf%lf",&a,&b);
	printf("\n***%.1f��%.1f�̎l�����Z***\n", a, b);
	printf("�a = %f\t",a+b);
	printf("�� = %f\t",a-b);
	printf("�� = %f\t",a*b);
	printf("�� = %f\n",a/b);
}