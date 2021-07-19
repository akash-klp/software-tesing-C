#include<stdio.h>
#include<conio.h>

int main()
{
	int locks, stocks, barrels;
	float locksales, stocksales, barrelsales, sales, commission;
	int totallocks=0, totalstocks=0, totalbarrels=0;
 	float lockprice=45.0,stockprice=30.0, barrelprice=25.0;
	printf ("Enter the number of locks\n");
	scanf("%d",& locks);
	while(locks !=-1)
	{
		printf ("Enter the number of stocks and barrels\n");
		scanf ("%d%d",&stocks,&barrels);
		totallocks= totallocks+locks;
		totalstocks= totalstocks+stocks;
 		totalbarrels= totalbarrels+barrels;
		printf ("Enter the number of locks and -1 to stop\n");
 		scanf ("%d",&locks);

	}
	printf ("locks sold : %d\n", totallocks);
	printf("stocks sold: %d\n", totalstocks);
 	printf("barrels sold: %d\n", totalbarrels);
	locksales=lockprice*totallocks;
	stocksales=stockprice*totalstocks;
 	barrelsales=barrelprice*totalbarrels;
  	sales=locksales+stocksales+barrelsales;
  	printf("totalsales= %f\n", sales);
  	if (sales>1800.0)
	{
		commission=0.10*1000.0;
		commission=commission+0.15*800.0;
		commission=commission+0.20*(sales-1800.0);

	}

	else if (sales>1000.0)
	{
		commission=0.10*1000.0;
		commission=commission+0.15*(sales-1000.0);
	}
	else
	{
		commission=0.10*sales;
	}
	printf ("Commission is %f\n", commission);
	getch();
}


