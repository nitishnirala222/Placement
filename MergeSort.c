#include<stdio.h>

int Merge(int a[],int low,int mid,int high)
{
    int i=low, b[high],j=mid+1,k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
  while(i<=mid)
    b[k++]=a[i++];
  while(j<=high)
    b[k++]=a[j++];
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
int MergeSort(int a[],int l,int h)
{
    if(l<h){
    int m=(l+h)/2;

    MergeSort(a,l,m);
    MergeSort(a,m+1,h);
    Merge(a,l,m,h);
}
}
int main()
{
    int ar[8]={12,54,86,92,10,46,33,79};
   printf("Before sorting...\n");
     for(int i=0;i<8;i++)
        printf("%d ",ar[i]);

    MergeSort(ar,0,7);
    printf("\nAfter MergeSorting sorting...\n");
  for(int i=0;i<8;i++)
        printf("%d ",ar[i]);
}
