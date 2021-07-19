#include<stdio.h>
#include<conio.h>
int main() 
{
	int l,s,b,ls,ss,bs,c1,c2,c3;
	float sale,c;
	int tl=0,ts=0,tb=0;
	float lp=45.0,sp=30.0,bp=25.0;
	printf("enter the number of locks\n");
	scanf("%d",&l);
	c1=(l<-1||l==0||l>70);
	while(l!=-1)
	{
		printf("Enter the number of stocks and barrels\n");
		scanf("%d%d",&s,&b);
		c2=(s<1||s>80);
		c3=(b<1||b>90);
		if(c1&&c2&&c3)
		{
    			printf("Value of locks,stock,barrel not in range\n");
    			break;
    		}
		else if(c1&&c2)
		{
			printf("value of lock and stock not in range");
			break;
		}
		else if(c1&&c3)
		{
			printf("value of lock and barrel not in range\n");
			break;
		}
		else if(c2&&c3)
		{
			printf("value of stock and barrel not in range\n");
			break;
		}
		else if(c1)
		{
			printf("value of lock not in range\n");
			break;
		}
		else if(c2)
		{
			printf("value of stock not in range\n");
			break;
		}
		else if(c3)
		{
			printf("Value of barrel not in range\n");
			break;
		}
		else 
		{
			tl=tl+l;
			ts=ts+s;
			tb=tb+b;
			printf("Enter the number of locks and -1 to stop\n");
			scanf("%d",&l);
		}
	}
	if(!(tl<-1||tl==0||tl>70||ts<1||ts>80||tb<1||tb>90||c1||c2||c3))
	{
   		printf("Locks sold : %d\nStocks sold: %d\nBarrels sold:%d\n",tl,ts,tb);
   		ls=lp*tl;
   		ss=sp*ts;
   		bs=bp*tb;
   		sale=ls+ss+bs;
     		printf ("Total sales =%f\n", sale);
   		if(sale>1800.0)
		{
			c=0.10*1000.0;
			c=c+0.15*800.0;
			c=c+0.20*(sale-1800.0);
		}
		else if (sale>1000.0)
		{
			c=0.10*1000.0;
			c=c+0.15*(sale-1000.0);
		}	
		else
		{
			c=0.10*sale;
		}
		printf("Commission is %f\n",c);
	}
	else
	printf ("not possible to calculate commission\n");
}
