#include<stdio.h>
int main()
{
    int array[100];
    int sum=0;
    int average=0;
    int n;
    int i=0;
    printf("Please Enter the size of this array : ");
        scanf("%d",&n);

        printf("Please Enter the Element of array : \n");
        for(i=0;i<n;i++){

            scanf("%d",&array[i]);
        }
         for(i=0;i<n;i++){

            printf("%d ",array[i]);
        }
         for(i=0;i<n;i++){

            sum+=array[i];
        }
        average = sum/n;
        printf("\nAverage : %d",average);

        return 0;
}

