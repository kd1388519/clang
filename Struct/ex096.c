 #include <stdio.h>
struct syohin_data {//�^�����
	char name[20];//���O
	int tanka;//�P��
};

void display1(int a);//a�̒l������
void display2(struct syohin_data syohin);//syohin�̒l������
void display3(struct syohin_data *p);

main()
{
	int a = 10;
	struct syohin_data syohin = { "�����S��",50 };
	display1(a);//�l�n��
	display2(syohin);//�l�n��
	display3(&syohin);//�A�h���X�n��

	//�����ς�������m�F
	display2(syohin);
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
void display3(struct syohin_data *p)
{
	printf("p->name = %s p->tanka = %d\n",p->name, p->tanka);
	//�A�h���X���󂯎���Ă���̂�
	//�����������\
	//���O���������Ă݂�
	strcpy(p->name,"�l������S��");
	//�P����100�~�ɂ��Ă݂�
	p->tanka = 100;
}