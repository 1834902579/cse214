#include<stdio.h>
int main()
{

    int i=0,size ;
    int array[size];

    printf("Enter the Size of Array : ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {

      scanf("%d",&array[i]);
      if(array[i]==0){
        break;
      }

    }
     for(i=0;i<size;i++)
    {

      printf("%d",array[i]);

    }

    return 0;
}
