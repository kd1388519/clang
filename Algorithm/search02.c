#include <stdio.h>
main()
{
	int i, s, d[10+1] = { 10,5,30,77,16,3,47,29,37,33,55};
	printf("\n’Tõ’n‚Í?\n");
	scanf("%d", &s);
	//”Ô•º‚ðŽdž‚Þ
	d[10] = s;
	for (i = 0;s !=d[i]; i++);{}
	if (i >= 10)
	{
		printf("\nŒ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("d[%d]‚É‚ ‚Á‚½\n", i);
	}
}