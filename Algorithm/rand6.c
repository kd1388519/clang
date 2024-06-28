#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int p,c;

	srand(time(0));
	rand();

	printf("何を出しますか?\n(1グー2チョキ3パー)");
	scanf(" %d", &p);
	c = rand() % 3;
		switch (p)
		{
			
		case 1
			printf("\nプレイヤーはグーです\n");
			break;
		case 2
			printf("\nプレイヤーはチョキです\n");
			break;
		case 3
			printf("\nプレイヤーはパーです\n");
			break;
	}
	switch (c)
	{
		case 0
			printf("\nコンピューターはグーです\n");
			break;
		case 1
			printf("\nコンピューターはチョキです\n");
			break;
		case 2
			printf("\nコンピューターはパーです\n");
			break;
	}
	switch ((p-1)-c+3) %3)
	{
		case 0
			printf("\nグーです\n");
			break;
		case 1
			printf("\nチョキです\n");
			break;
		case 2
			printf("\nパーです\n");
			break;
	}
}