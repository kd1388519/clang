#include <stdio.h>
main()
{
	char data[6] = "Apple";
	int i;

	//printf("1文字ずつ表示\n");
	//for (i = 0; data[i] != '\0'; i++)
	//{
	//	printf("%c \n", data[i]);
	//}

	printf("\n文字列を表示\n");
	//printf("%s\n", &data[0]);  //%sの時はアドレスを指定します
	printf("%s\n",&data);  //配列名だけ書くと先頭アドレスを指定します

}