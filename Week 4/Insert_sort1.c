#include<stdio.h>
#include<conio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (j = 2; j < n; j++) {

        key = arr[j];
        i = j - 1;


        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
    }

    printf("Descending Order: ");

    for (j = n-1; j >=0; j--)
    {
        printf("%d ", arr[j]);

    }
    printf("\n");

}




int main()
{

    int n,arr[50];
    printf("Enter Array Size :");
    scanf("%d",&n);

    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }

    insertionSort(arr,n);


    getch();
}
