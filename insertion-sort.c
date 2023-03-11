#include<stdio.h>
#include<stdlib.h>
#define n 15
void insertion(int a[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int a[n];
    printf("Unsorted array:");
    for(int i=0;i<n;i++)
    a[i]=rand() % 100;
    for(int i=0;i<n;i++)
    printf(" %d",a[i]);

    insertion(a);
    printf("\nSorted array with Insertion sort:");
    for(int i=0;i<n;i++)
    printf(" %d", a[i]);

}