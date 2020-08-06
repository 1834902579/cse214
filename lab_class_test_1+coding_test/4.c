#include <stdio.h>
int main()
{
    int arr[100];
    int i=0;
    int size;
    int value,index;

    printf("Enter size of the array : ");
    scanf("%d",&size);


    printf("Enter values in array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter value to insert : ");
    scanf("%d",&value);
    printf("Enter the value index : ");
    scanf("%d",&index);

    if(index > size+1 || index <= 0)
    {
        printf("Invalid index! Please enter index between 1 to %d", size);
    }
    else
    {
        for(i=size; i>=index; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[index-1] = value;
        size++;
        printf("Array values after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}

