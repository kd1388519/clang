#include <stdio.h>
struct syohin_data {//�^�����
	char name[20];
	int tanka;
};

void display1(int a);//a�̒l������
void display2(struct syohin_data syohin);//syohin�̒l������

main()
{
	int a = 10;
	struct syohin_data syohin = { "�����S��",50 };
	display1(a);//�l�n��
	display2(syohin);//�l�n��
}
void display1(int a)//a= 10
{
	printf("a = %d\n", a);
}
void display2(struct syohin_data syohin)//�����S����50������
{
	printf("syohin.name = %s syohin.tanka = %d\n",
		syohin.name, syohin.tanka);
}
