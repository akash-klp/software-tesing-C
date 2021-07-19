#include<stdio.h>
int main()
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d,m,y,nd,nm,ny,ndays,f;
	do
	{
		f=0;
		printf("Enter Day, Month and Year\n");
		scanf ("%d%d%d",&d,&m,&y);
		if (d<1||d>31)
		{
			printf ("Day is not in the range 1 to 31\n");
			f=1;
		}
		if (m<1||m>12)
		{
			printf("Month is not in the range 1 to 12\n");
			f=1;
		}
		if (y<1821 ||y>2021)
		{
			printf("year is not in the range 1821 to 2021\n");
			f=1;
		}
	}
	while(f==1);
	ndays=month[m-1];
	if(m==2)
	if(y%4==0&&y%100!=0||y%400==0)
	ndays=29;
	if (d>ndays)
	printf ("Month %d can't have %d day in the year %d\n",m,d,y);
	else
	{
		nd=d+1;
		nm=m;
		ny=y;
		if (nd>ndays)
		{
			nd=1;
			nm++; 
		}
		if (nm>12)
		{
			nm=1;
			ny++;
		}
		printf("Entered Date is %d--%d--%d\n",d,m,y);
		printf("Next Date is %d--%d--%d\n",nd, nm, ny);
	}
}

