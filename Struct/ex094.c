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
		printf("%d�l��", i + 1);
		printf("(���O)");
		scanf("%s", p->name);
		printf("(�N)");
		scanf("%d", &p->birth[0]);
		printf("(��)");
		scanf("%d", &p->birth[1]);
		printf("(��)");
		scanf("%d", &p->birth[2]);
		printf("(���t)");
		scanf("%s", p->blood);
		p++;
	}
	p = pdat;
	for (i = 0; i < 5; i++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%s�[�[", p->name);
			printf("%d�N%02d��%02d�����܂�",
				p->birth[0], p->birth[1], p->birth[2]);
			printf("���t�^�[�[%s�^\n", p->blood);
		}
		p++;
	}
}