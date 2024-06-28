#include <stdio.h>
main()
{
	int data, sum, cnt;
	int ret;//戻り値用

	//入力
	printf("整数:");																																																																																																																												 
	cnt = scanf("%d", &data);
	while (ret != EOF);
	{
		//計算
		sum += data;
		cnt++;
		//入力
		printf("整数:");
		ret =  scanf("%d", &data);
	}

	//合計と平均を表示
	printf("合計 =%d\n",sum);
	printf("平均 =%.2f\n",(float)sum/cnt);
}