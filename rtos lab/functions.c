#include "header.h"
void BubbleSort(int size,int arr[])
{
int i,j,temp;
for(i=1;i<=size-1;i++)
{
	for(j=1;j<=size-i;j++)
		if(arr[j-1]>=arr[j])
		{
			temp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=temp;
		}
}
}
float mean(int size,int arr[])
{
int i;
float total=0.0;
for(i=0;i<size;i++)
{
total=total+arr[i];
}
return total/size;
}

float mode(int size,int arr[])
{
int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < size; ++i) {
      int count = 0;
      
      for (j = 0; j < size; ++j) {
         if (arr[j] == arr[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = arr[i];
      }
   }

   return maxValue;
}

float median(int size,int arr[])
{
	BubbleSort(size,arr);
	float median=0;
    
    
    if(size%2 == 0)
        median = (arr[(size-1)/2] + arr[size/2])/2.0;
    
    else
        median = arr[size/2];
    
    return median;
}
int max(int size,int arr[])
{
	BubbleSort(size,arr);
	return (arr[size-1]);
}
int min(int size,int arr[])
{
	BubbleSort(size,arr);
	return(arr[0]);
}
