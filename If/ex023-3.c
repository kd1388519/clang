#include <stdio.h>
main()
{
	int su1, su2, big;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &big);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í:");
	scanf("%d%d", &su1, &su2);
	if (big == 1)
	{
		printf("%d\n", su1 + su2);
	}
	else
	{
		if (big == 2)
		{
			printf("%d\n", su1 - su2);
		}
		else
		{
			if (big == 3)
			{
				printf("%d\n", su1 * su2);
			}
			else 
			{
				if (big == 4)
				{
					printf("%d\n", su1 / su2);
				}
			}
		}
	}
}