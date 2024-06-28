 #include <stdio.h>
struct syohin_data {//型を作る
	char name[20];//名前
	int tanka;//単価
};

void display1(int a);//aの値を入れる
void display2(struct syohin_data syohin);//syohinの値を入れる
void display3(struct syohin_data *p);

main()
{
	int a = 10;
	struct syohin_data syohin = { "消しゴム",50 };
	display1(a);//値渡し
	display2(syohin);//値渡し
	display3(&syohin);//アドレス渡し

	//書き変わったか確認
	display2(syohin);
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
void display3(struct syohin_data *p)
{
	printf("p->name = %s p->tanka = %d\n",p->name, p->tanka);
	//アドレスを受け取っているので
	//書き換えが可能
	//名前書き換えてみる
	strcpy(p->name,"値上消しゴム");
	//単価を100円にしてみる
	p->tanka = 100;
}