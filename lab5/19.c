#include <stdio.h>
int main()
{
    int i, n;
    int j = 0;
    int *p, *q, *r;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr1[10];
    int arr2[10];
    int size = 10;
    int size1 = 0;
    int size2 = 0;

    p = &arr[0];
    q = &arr1[0];
    r = &arr2[0];

    scanf("%d",&n);

    for(i=0; i<size; i++){
        printf("%d ",*(p+i));
    }
    for(i=0; i<size; i++){
        if(i<n){
            *(q+i) = *(p+i);
            size1++;
        }
        else{
            *(r+j++) = *(p+i);
            size2++;
        }
    }

    printf("\n");

    for(i=0; i<size1; i++){
        printf("%d ",*(q+i));
    }
    printf("\n");

    for(i=0; i<size2; i++){
        printf("%d ", *(r+i));
     }
    return 0;
}
