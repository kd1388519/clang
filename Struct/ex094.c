#include <stdio.h>
#include <string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main() {
	struct profile pdat[5];
	struct profile *p=pdat;
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d人目", i + 1);
		printf("(名前)");
		scanf("%s", p->name);
		printf("(年)");
		scanf("%d", &p->birth[0]);
		printf("(月)");
		scanf("%d", &p->birth[1]);
		printf("(日)");
		scanf("%d", &p->birth[2]);
		printf("(血液)");
		scanf("%s", p->blood);
		p++;
	}
	p = pdat;
	for (i = 0; i < 5; i++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%sーー", p->name);
			printf("%d年%02d月%02d日生まれ",
				p->birth[0], p->birth[1], p->birth[2]);
			printf("血液型ーー%s型\n", p->blood);
		}
		p++;
	}
}