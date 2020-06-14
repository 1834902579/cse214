#include<stdio.h>
int main()
{

    int array[100]={1,2,3,4,5,6,7,8,9,10};
    int i;
    printf("Before Reverse \n");
    for(i=0;i<10;i++)
        {
          printf("%d ",array[i]);
        }
    printf("\nAfter Reverse \n");
    for(i = 10-1;i>=0;i--){
        printf("%d ",array[i]);
    }


        return 0;
}
