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
			printf("��S�̈ꌂ\n");
		}
		else 
		{
			printf("�ʏ�U��\n");
		}
		
}