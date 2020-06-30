#include<stdio.h>
#include<conio.h>
int main()
{
    int num[20];
    int i,n,sum=0,max ,min;


    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }


     for (i = 0; i <n; i++)

    {
        sum=sum+num[i];

        if(max<num[i]);
        {
            max=num[i];
        }
        if(min>num[i])
        {
            min=num[i];
        }

    }
         printf("\n%d ", sum-max);
         printf("%d ", sum-min);



    getch();

}
