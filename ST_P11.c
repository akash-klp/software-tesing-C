#include<stdio.h>
#include <conio.h>

void quicksort(int x[10], int first, int last)
{
	int temp,pivot, i, j;
 	if (first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(x[i]<=x[pivot] && i<last)
 			i++;
  			while(x[j]>x[pivot])
			j--;
			if(i<j)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
		temp=x[pivot];
		x[pivot]=x[j];
 		x[j]=temp;
 		quicksort(x,first, j-1);
 		quicksort (x, j+1, last);
	}
}

int main()
{
	int a[100],i,key,n;
 	printf("Enter the size of the array:\n");
 	scanf("%d",&n);
 	printf("Enter the elements of the array\n");
	for(i=0; i<n; i++) 
	scanf ("%d",&a[i]);
	quicksort (a,0,n-1);
	printf(" Elements in the sorted array is:\n");
 	for(i=0;i<n;i++)
  	printf("%d\t", a[i]);
  	getch();
}