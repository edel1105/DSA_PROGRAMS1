/*C Program to count total number of duplicate elements in an array*/

#include <stdio.h>

void main ()


{
int arr[10],i,j,size,count=0;

printf("\nPlease Enter Number of elememts in an array:");
scanf("%d",&size);

printf("\nPlease enter %d elements of an array:",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for (i=0;i<size;i++)
{
if (arr[i]==arr[j]);
count++;
break;
}

printf("\nTotal number of duplicate elements in this array is");

}




















