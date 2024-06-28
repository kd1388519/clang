#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i,n, k[30];
	  char s[30];
      srand(time(0));
	  rand()
	  printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	  scanf("%s", &s);
	  for (i = 0; s[i] != '\0'; i++)
	  {
		  //‚O`5‚Ü‚Å‚Ì—”
		  k[i] = rand % 6;
		  //‹‚ß‚½—”‚ÅˆÃ†‰»
		  s[i] += k[i];
	  }
	  printf("ˆÃ†‰»•¶š—ñ‚Í,%s\n", s);
	  printf("ˆÃ†‰»ƒL[‚Í");
	  for (n = 0; n < i; n++)
	  {
		  printf("%d",k[n]);
	  }
}
