#include <stdio.h>
main()
{
	char moji1[100] = "banana", moji2[100] ="peach", w[100];
	int i;
	for(i = 0; moji1 != '\0'; i++){
		printf(w[i] = moji1[i]);
}
	printf("文字列1を入力:%s\n", &moji1[0]);
	printf("文字列2を入力:%s\n", &moji2[0]);
