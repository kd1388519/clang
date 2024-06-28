#include <stdio.h>
struct syohin_data {
	char name[20];
		int tanka;
};

main()
{
	struct syohin_data syohin;
	struct syohin_data* p;
	p = &syohin;　
	printf("商品名=");
	scanf("%s", p->name);//アロー演算子
	p->tanka = 30;
	printf("p^>name = %s\n", p->name);
	printf("p^>name = %d\n", p->tanka);
	printf("syohin.name = %s\n", syohin.name);
	printf("syohin.tanka = %d\n", syohin.tanka);
}