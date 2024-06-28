#include <stdio.h>
void display(void);

main()
{
	int a, b;
	printf("data1 data2?;");
	scanf("%d%d", &a, &b);
	if (b == 0) {
		error_msg();
	}
	else {
		printf("%d/%d =%d...%d\n", a, b, a / b, a % b);
	}
}
void error_msg(void)
{
	printf("‚O‚ÅŠ„‚èZ‚Ío—ˆ‚Ü‚¹‚ñ\n");
	return;
}
