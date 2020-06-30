#include<stdio.h>
#include<conio.h>

void Sort(int arr[], int n)
{
    int i, key, j;
    for (j = 1; j < n; j++) {

        key = arr[j];
        i = j - 1;


        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
        }

    printf("\nAscending Order: ");

    int max,min;

    for (j = 0; j <n; j++)

    {
        printf("%d ", arr[j]);

        if(max<arr[j]);
        {
            max=arr[j];
        }
        if(min>arr[j])
        {
            min=arr[j];
        }

    }

    printf("\nDifference Btn max-min=%d ", max-min);

    printf("\n");
}

int main()
{

    int n, arr[100];
    printf("Enter Array Size :");
    scanf("%d",&n);

    printf("Enter Data:");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    Sort(arr,n);


    return 0;
}
