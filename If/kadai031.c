#include <stdio.h>
main()
{
	float a,b;
	printf("2つの整数値?");
	scanf("%f%f",&a,&b);
	if (a < b) {
		printf("大きいほうは%f", b);
	}
	else {
		printf("大きいほうは%f", a);
	}
}