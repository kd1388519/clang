#include <stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisu;
	printf("文字列を？:");
	gets(buf);
	mojisu = strcnt(buf);
	printf("入力された文字列の文字数か%d文字です\n", mojisu);
}
int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}