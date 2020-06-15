# LAB ASSIGNMENT-05

## Array Opertion Using Pointer

Write a C program thet declare an integer array length of one hundred[100](do not initialize the array).Then write the following program.Check overflow an each program.[NB:Use Pointer ,Dont use funtion].Write each program in a different file.File name will br the problem number.

[01.Scan N(take input N from user)values from user into an array.Access the array using Pointer.](https://github.com/1834902579/cse214/blob/master/lab5/1.c)


[02.Scan values from user into an array until end of file.Acccess the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/2.c)


[03.Scan values from user into an array until user input 0(zero).Acccess the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/3.c)


Write C program that declare an integer array length of one hundard[100]and initialize the array with the [10] values.Then do the following operations.[NB:Dont use function and pointer].write each program in a different file.File name will be the problem number.

[04.Print entrie array each element separated space.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/4.c)


[05.Insert a value x(take input X from user)in array at kth (take input K from user)index and shift all other value to right.And print the whole array.Access the array using ponter.](https://github.com/1834902579/cse214/blob/master/lab5/5.c)


[06.Update kth (take input K from user) index with the value X(take input X from user).And print the whole array.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/6.c)


[07.Search a value X(take input X from user)in the array and print the location if X found in the array otherwise print -1.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/7.c)


[08.Delete a value from kth index(take input K from user)from the array the array shift all other value to left.And print the whole array .Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/8.c)

[09.Find maximum from the array.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/9.c)


[10..Find minimum from the array.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/10.c)


[11.Find second maximum from the array.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/11.c)


[12.Find second minimum from the array.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/12.c)


[13.Calculate the summation of all elements of the given array.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/13.c)


[14.Copy the given array into another array.Access the using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/14.c)

int i;
    int *p, *q;
    int tag = 0;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10];
    int size = 10;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        tag = *(p+i);
        *(q+i) = tag;
    }
[15.Reverse the given array within the same array.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/15.c)

int i;
    int *p, *q;
    int tag = 0;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10];
    int size = 10;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<=size; i++)
    {
        tag = *(p+size-i);
        *(q+i-1) = tag;
    }
[16.Declare another array with ten(10)values and compare both array whether they are same or not.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/16.c)

 int i;
    int *p, *q;
    int same = 0;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    for(i=0; i<size; i++)
        if(*(p+i)==*(q+i))
            same++;

    if(same==size)
[17.Declare another array with five values and merge two array into one array.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/17.c)

 int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100] = {11, 12, 13, 14, 15};
    int size1 = 10;
    int size2 = 5;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size1; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ",*(q+i));

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
       *(p+i)=*(q+j);
[18.Merge the elements of two sorted array.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/18.c)

int i, j, size, tag;
    int *p, *q;
    int array1[100] = {8, 2, 18, 19, 11, 14, 15, 7, 1, 4};
    int array2[100] = {10, 5, 20, 12, 16, 13, 17, 3, 6, 9};
    int size1 = 10;
    int size2 = 10;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
    {
        size1++;
        *(p+i)=*(q+j);
    }

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(*(p+i)>*(p+j))
            {
                tag = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = tag;
            }
        }
    }

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));
[19.Split an array after kth(take input K from user)elements into two different arrays.Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/19.c)

 p = &array[0];
    q = &array1[0];
    r = &array2[0];

    scanf("%d",&K);

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    for(i=0; i<size; i++)
    {
        if(i<K)
        {
            *(q+i) = *(p+i);
            size1++;
        }
        else
        {
            *(r+j++) = *(p+i);
            size2++;
[20.Cyclically permute the element of an array .Access the array using pointer.](https://github.com/1834902579/cse214/blob/master/lab5/20.c)

 int i;
    int *p;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    p = &array[0];
    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    *(p+size) = *p;

    for (i=0; i<size; i++)
        *(p+i) = *(p+i+1);

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));
