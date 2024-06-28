#include <stdio.h>
enum BitState
{
	Base = 0,//00000000�@�ʏ���
	Poison = 1<<0,//00000001�@�ǂ����
	Sleep = 1<<1,//00000010�@�˂ނ���
	Paralysis = 1<<2,//00000100�@�܂Џ��
	Burn = 1<<3,//00001000�@�₯�Ǐ��
	AtkUp = 1<<4,//00010000�@�U���̓A�b�v���
	AtkDown = 1<<5//00100000�@�U���̓_�E�����
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	//��Ԃ��Ǘ�����ϐ�MuState��錾����Base(0)�ŏ�����
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UINT s) 
{
	printf("*****���݂̏��*****\n");
	if (s & Poison) {
		printf("�ǂ�\n");
	}
	if (s & Sleep) {
		printf("�˂ނ�\n");
	}
	if (s & Paralysis) {
		printf("�܂�\n");
	}
	if (s & Burn) {
		printf("�₯��\n");
	}
	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown) {
		printf("�U���̓_�E��\n");
	}
		printf("***************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�ǂ�2:�˂ނ�3:�܂�4:�₯��5:�U���A�b�v6:�U���_�E��0:���͏I��>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ����񕜂��܂����H");
		printf("1:�ǂ� 2:�˂ނ� 3:�܂� 4:�₯�� 5:�U���A�b�v 6:�U���_�E�� 7:�S��ԃN���A 0:���͏I��>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s &= Base;
			break;
		default:
			break;
		}
	}
}