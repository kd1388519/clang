#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"�G���s�c",30,5},
									{"�����S��",50,2},
									{"�M��",500,3} };
	struct syohin_data* p;
	p = syohin;

	int i;
	for (i = 0; i < 3; i++) {
		printf("���i��:%s\t", p->name );
		printf("�P��:%4d\t", p->tanka );
		printf("��:%4d\t", p->kosuu );
		printf("���z:��%4d\n", p->tanka  *p->kosuu );
	}


	/*int i;
	for (i = 0; i < 3; i++) {
		printf("���i��:%s\t", syohin[i].name);
		printf("�P��:%4d\t", syohin[i].tanka);
		printf("��:%4d\t", syohin[i].kosuu);
		printf("���z:��%4d\n", syohin[i].tanka * syohin[i].kosuu);
	}*/
}