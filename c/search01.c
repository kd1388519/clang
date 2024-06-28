#include <stdio.h>
main()
{
	int i, s, d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	for (i = 0; i < 10; i++);
	{
		printf("%o2d", d[i]);
	}
	printf("\n’Tõ’n‚ð“ü—Í“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d", &s);
	i = 0;
	while (i < 10) {
		if (s == d[i])break;
		i++;
	}
	if (i >= 10)
	{
		printf("\nŒ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("”z—ñ‚Ì%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½", i);
	}
}