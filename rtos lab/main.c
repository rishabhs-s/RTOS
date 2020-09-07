#include<stdio.h>
#include "functions.c"

int main()
{
	int arr[100],i,n,c,s;
	float j,m;
	
	printf("Enter size \n");
	scanf("%d",&n);
	printf("Enter elements \n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter your choice \n1.Sorting\n2.Mean\n3.Median\n4.Mode\n5.Maximum\n6.Minimum\n");
	scanf("%d",&c);
	switch(c)
{
	case 1:BubbleSort(n,arr);
		printf("Sorted array  : ");
		for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		break;
	case 2:m=mean(n,arr);
		printf("Mean is %6.2f",m);
		break;
	case 3:m=median(n,arr);
		printf("Median is %.2f",m);
		break;
	case 4:m=mode(n,arr);
		printf("Mode is %.2f",m);
		break;
	case 5:s=max(n,arr);
		printf("Maximum element is %d",s);
		break;
	case 6:s=min(n,arr);
		printf("Minimum element is %d",s);
		break;
	
}
	
return 0;
}