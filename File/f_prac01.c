#include <stdio.h>
main()
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp,"%s%d",max_name)
	printf("プレイヤーの名前は:");
	scanf("%s", name);
	while (1) {
		printf("現在のスコア:%d(Enterでスコア+1,eで終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		//スコア加算
		score++;
	}　　　　　　
	if (scpre > max_score)
	{
		//ファイル書き込み
		//①ファイルオープン
	//ファイルscore.txtへの書き込み;
		fp = fopen("score.txt", "w");

		fprintf(fp, "%s\n%d\n", name, score);

		fclose(fp);
	}
}