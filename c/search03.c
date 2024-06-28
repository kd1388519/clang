//パオナリ.サーチー
#include <stdio.h>
main()
{
	int s, mid, low, high, d[] = {10,25,28,23,28,35,47,55,68,78,96};

	low = 0;
	high = 10;
	printf("探索地は?");
	scanf("%d", &s);
	while(low >= high)
	{
		mid = (low + high) / 2;
		if (s  == d[mid])break;
		if (s > d[mid]) { low = mid + 1; }
		if (s < d[mid]) { high = mid - 1; }
	}
	if (low > high)
	{
		printf("見つからなかった\n");
	}
	else {
		printf("d[%d]にあった", mid);
	}
}
