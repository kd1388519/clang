#include <stdio.h>
#include <string.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};
main()//初期値は["aoyama"[1972,3,5]."A"]みたいな感じで書くと格納できる
{
	struct profile pdat[5] = { {"matui",[2005,2,19],"A"}
						{ "matqi",[2005,8,11],"A" },
						{ "matai",[2005,2,32],"B" },
						{ "matzi",[2005,6,11],"C" },
						{ "matdi",[2005,5,12],"O" }, };
	struct profile* p = pdat;
	int i ;
	for (i = 0, i < 5; i++)
	{
		if (p->birth, tuki == 2)
		{
			printf("%s", p->name);
				printf("%d年%02d月%02d日生", p->birth.nen, p->birth.tuki, p->birth.hi);
				printf("血液型ーー%s\n", p->blood);
		}
		p++;
	}
}
