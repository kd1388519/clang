#include <stdio.h>
struct syohin_data {//型を作る
	char name[20];
	int tanka;
};

void display1(int a);//aの値を入れる
void display2(struct syohin_data syohin);//syohinの値を入れる

main()
{
	int a = 10;
	struct syohin_data syohin = { "消しゴム",50 };
	display1(a);//値渡し
	display2(syohin);//値渡し
}
void display1(int a)//a= 10
{
	printf("a = %d\n", a);
}
void display2(struct syohin_data syohin)//消しゴムと50が入る
{
	printf("syohin.name = %s syohin.tanka = %d\n",
		syohin.name, syohin.tanka);
}
