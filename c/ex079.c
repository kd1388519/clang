#include  <stdio.h>
int tbl_gokei3(int tbl[], int numder);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei3(a, 5);
	printf("goukei = %d\n", gokei);
}
int tbl_gokei3(int tbl[], int numder)
{
	int gokei = 0, i = 0;
	for (i = 0 ,gokei =0; i < numder; i++)
	{
		gokei += tbl[i];
	}
	return(gokei);
}