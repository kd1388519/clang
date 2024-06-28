#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int kougeki;
	srand(time(0));
	rand();
	kougeki = rand()%100 + 1;
	    if (kougeki<=30)
		{
			printf("‰ïS‚ÌˆêŒ‚\n");
		}
		else 
		{
			printf("’ÊíUŒ‚\n");
		}
		
}