
#include<stdio.h>
#include<conio.h>

int Bubble_Sort(int arr[],int n);

int main()
{
    int arr[50],position=0;
    int n,i,j,temp;

    printf("How many Number you want?? :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    Bubble_Sort(arr,n);

    for(i=0;i<n;i++)
    {
        printf("\n%d ",arr[i]);
        position=i+1;
        printf("\n%d ",position);


    }

    getch();
}

 int Bubble_Sort(int arr[],int n)
{
    int i,j,temp,position=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                position=i+1;
            }
        }

    }
}
