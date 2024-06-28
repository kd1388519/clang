#include <stdio.h>
#include <string.h>

#define CNT 4//配列サイズ

main()
{
	char* p_tbl[] = { "programming2","Algorithm","Programming1","C" };
	char* w;//入れ替えアルゴリズム
	int i, j;

	for (i = 0; i < CNT - 1; i++)//CMT = 4, 4-1=3
	{
		for (j = i + 1; j < CNT; j++)
		{
			if (strcmp(p_tbl[i], p_tbl[j]) > 0)
			{
				w = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = w;
			}

		}

	}
	for (i = 0; i < CNT; i++) {
		printf("%s\n", p_tbl[i]);
	}
}

