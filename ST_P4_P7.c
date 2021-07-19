#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,c1,c2,c3;
	char istriangle;
	do
	{
		printf ("\nEnter 3 intergers which are sides of triangles\n");
		scanf ("%d%d%d",&a,&b,&c);
		printf ("\na=%d\tb=%d\tc=%d",a,b,c);
		c1= a>=1 && a<=10;
		c2= b>=1 && b<=10;
		c3=c>=1 && c<=10;
		if (!c1)
		printf("\na=%d is not the range of permitted value 1 to 10",a);
		if (!c2)
		printf("\nb=%d is not the range of permitted value 1 to 10",b);
		if (!c3)
		printf("\nc=%d is not the range of permitted value 1 to 10",c);
	}
	while (!(c1&&c2&&c3));
	if (a<b+c && b<a+c && c<a+b)
	istriangle='y';
	else
	istriangle='n';
	if (istriangle=='y')
	if ((a==b)&&(b==c))
	printf ("\n\nEquilaterlal triangle\n\n");
	else if ((a!=b)&&(a!=c)&&(b!=c))
	printf("\n\nScalene Triangle\n\n");
	else
	printf ("\n\nIsosceles Triangles\n\n" );
	else
	printf ("\n\nnot a Triangle\n\n");
	getch();
}

