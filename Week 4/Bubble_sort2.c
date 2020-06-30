
#include<stdio.h>
#include<conio.h>

int Bubble_Sort(int arr[],int n);

int main()
{
    int arr[100],sum=0;
    int n,i,j,temp;

    printf("Enter Array Size:");
    scanf("%d",&n);

    printf("Enter Data :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    Bubble_Sort(arr,n);
    printf("\n\nAscending Order:");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        sum=sum+arr[i];
    }

    printf("\nSum = %d",sum);

    getch();
}

 int Bubble_Sort(int arr[],int n)
{
    int i,j,temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
