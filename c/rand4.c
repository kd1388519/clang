#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int un,i ;
	srand(time(0));
	un = rand() % 5 + 1;

	printf("¡“ú‚Ì‰^¨‚Í:");
	for (i = 0; i < un; i++)
	{
		printf("™");
	}
	printf(" ‚Å‚·.\n");
}


	/*if (un == 1)
	{
		printf("™");
	}
	else {}
	if (un == 2)
	{
		printf("™™");
	}
	else {}
	if (un == 3)
	{
		printf("™™™");
	}
	else {}
	if (un == 4)
	{
		printf("™™™™");
	}
	else {}
	if (un == 5)
	{
		printf("™™™™™");
	}
	else {}*/