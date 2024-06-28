#include <stdio.h>
struct syohin_data {//Œ^‚ğì‚é
	char name[20];
	int tanka;
};

void display1(int a);//a‚Ì’l‚ğ“ü‚ê‚é
void display2(struct syohin_data syohin);//syohin‚Ì’l‚ğ“ü‚ê‚é

main()
{
	int a = 10;
	struct syohin_data syohin = { "Á‚µƒSƒ€",50 };
	display1(a);//’l“n‚µ
	display2(syohin);//’l“n‚µ
}
void display1(int a)//a= 10
{
	printf("a = %d\n", a);
}
void display2(struct syohin_data syohin)//Á‚µƒSƒ€‚Æ50‚ª“ü‚é
{
	printf("syohin.name = %s syohin.tanka = %d\n",
		syohin.name, syohin.tanka);
}
