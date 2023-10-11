#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int low,int high)
{
    int pivot=a[low],i=low,j=high+1;
    do{
        do{
            i++;
        }while(a[i]<pivot);
        do{
            j--;
        }while(a[j]>pivot);

        if(i<j)
            swap(&a[i],&a[j]);
    }while(i<j);
    swap(&a[low],&a[j]);
    return j;
}
int QuickSort(int ar[],int low,int high)
{
    if(low<high){
    int j=partition(ar,low,high);
    QuickSort(ar,low,j-1);
    QuickSort(ar,j+1,high);
}
}
int main()
{
    int ar[10]={34,25,11,76,46,59,23,98,35,49};
    printf("Before sorting...\n");
     for(int i=0;i<10;i++)
        printf("%d ",ar[i]);

    QuickSort(ar,0,9);
    printf("\nAfter QuickSorting sorting...\n");
    for(int i=0;i<10;i++)
        printf("%d ",ar[i]);
}
