#include <stdio.h>
main()
{
	char moji1[100] = "banana", moji2[100] ="peach", w[100];
	int i;
	for(i = 0; moji1 != '\0'; i++){
		printf(w[i] = moji1[i]);
}
	printf("������1�����:%s\n", &moji1[0]);
	printf("������2�����:%s\n", &moji2[0]);
