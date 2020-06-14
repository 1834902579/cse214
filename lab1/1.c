#include<stdio.h>
int main()
{

    int array[100];
    int i,size;

    while(scanf("%d",&array[i])==1)
    {
        if(i>100){
            printf("ArrayIndexOverFlow");
            break;
        }
        i++;

    }
    i=size;
     for(i=0;i<size;i++)
    {

      printf("%d",array[i]);

    }

    return 0;
}
