#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},
									{"消しゴム",50,2},
									{"筆箱",500,3} };
	struct syohin_data* p;
	p = syohin;

	int i;
	for (i = 0; i < 3; i++) {
		printf("商品名:%s\t", p->name );
		printf("単価:%4d\t", p->tanka );
		printf("個数:%4d\t", p->kosuu );
		printf("金額:￥%4d\n", p->tanka  *p->kosuu );
	}


	/*int i;
	for (i = 0; i < 3; i++) {
		printf("商品名:%s\t", syohin[i].name);
		printf("単価:%4d\t", syohin[i].tanka);
		printf("個数:%4d\t", syohin[i].kosuu);
		printf("金額:￥%4d\n", syohin[i].tanka * syohin[i].kosuu);
	}*/
}