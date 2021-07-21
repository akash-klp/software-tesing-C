#include<stdio.h>
//#include<conio.h>
int binsrc(int x[], int low, int high, int key)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(x[mid]==key)
		return mid;
		if (x[mid]<key)
		low=mid+1;
		else
		high=mid-1;
	}
	return -1;
}
int main()
{
	int a [20], key, i, n, succ;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements in ascending order\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the key element to be searched\n");
	scanf("%d",&key);
	succ=binsrc (a,0,n-1,key);
	if (succ>=0)
	printf("Successfull search, Key element found at %d position\n", succ+1);
	else
	printf("Unsuccessfull search, Key element not found \n");
}
