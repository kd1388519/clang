#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int p,c;

	srand(time(0));
	rand();

	printf("�����o���܂���?\n(1�O�[2�`���L3�p�[)");
	scanf(" %d", &p);
	c = rand() % 3;
		switch (p)
		{
			
		case 1
			printf("\n�v���C���[�̓O�[�ł�\n");
			break;
		case 2
			printf("\n�v���C���[�̓`���L�ł�\n");
			break;
		case 3
			printf("\n�v���C���[�̓p�[�ł�\n");
			break;
	}
	switch (c)
	{
		case 0
			printf("\n�R���s���[�^�[�̓O�[�ł�\n");
			break;
		case 1
			printf("\n�R���s���[�^�[�̓`���L�ł�\n");
			break;
		case 2
			printf("\n�R���s���[�^�[�̓p�[�ł�\n");
			break;
	}
	switch ((p-1)-c+3) %3)
	{
		case 0
			printf("\n�O�[�ł�\n");
			break;
		case 1
			printf("\n�`���L�ł�\n");
			break;
		case 2
			printf("\n�p�[�ł�\n");
			break;
	}
}