#include <stdio.h>
main()
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp,"%s%d",max_name)
	printf("�v���C���[�̖��O��:");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A:%d(Enter�ŃX�R�A+1,e�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		//�X�R�A���Z
		score++;
	}�@�@�@�@�@�@
	if (scpre > max_score)
	{
		//�t�@�C����������
		//�@�t�@�C���I�[�v��
	//�t�@�C��score.txt�ւ̏�������;
		fp = fopen("score.txt", "w");

		fprintf(fp, "%s\n%d\n", name, score);

		fclose(fp);
	}
}