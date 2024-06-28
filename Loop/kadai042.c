#include <stdio.h>
main()
{
	int i;
	int a = 0;
	i = 0;
	while (a<300)
	{
        i++;
		a += i;		
		printf("%d+",i);
	}
	printf("=%d", a);
}