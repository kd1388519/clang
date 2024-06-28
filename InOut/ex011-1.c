#include <stdio.h>
main()
{
	char mu1, mu2, mu3, mu4, mu5, mu6, mu7, mu8, mu9, mu10;
	mu1 = 'A';
	mu2 = 'B';
	mu3 = 'C';
	mu4 = 'a';
	mu5 = 'b';
	mu6 = 'c';
	mu7 = '0';
	mu8 = '1';
	mu9 = '2';
	mu10 = ' ';
	printf(" %c: %d 0x %x\n %c: %d 0x %x\n", mu1, mu1, mu1, mu2, mu2, mu2);
	printf(" %c: %d 0x %x\n %c: %d 0x %x\n", mu3, mu3, mu3, mu4, mu4, mu4);
	printf(" %c: %d 0x %x\n %c: %d 0x %x\n", mu5, mu5, mu5, mu6, mu6, mu6);
	printf(" %c: %d 0x %x\n %c: %d 0x %x\n", mu7, mu7, mu7, mu8, mu8, mu8);
	printf(" %c: %d 0x %x\n %c: %d 0x %x\n", mu9, mu9, mu9, mu10, mu10, mu10);
}