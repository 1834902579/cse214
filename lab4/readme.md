# LAB ASSIGNMENT-04

## 1D Array Tntermediate Operation Part-01

* Copy

* Reverse

* Compare

* Merge

* Split

* Cyclically permute

01.Copy the given array into another array.
  ```c
 int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size = 10;
    int b[10], i;

    for(i = 0; i < size; i++)
    {
        b[i] = a[i];
    }

    for(i = 0; i < size; i++)
    {
        printf("%d ",b[i]);
    }

    ```
    
    
   02.Reverse the given array and store it in another array.
    
    ```c
     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size = 10;
    int b[10], i;

    for(i = size - 1; i >= 0; i--)
    {
        b[i] = a[i];
    }

    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ",b[i]);
    }

      ```
    
    03.Reverse the given array  within the same array.
    
       ```c
	    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size = 10;
	    int i;

	    for(i = size - 1; i >= 0; i--)
    		{
        	printf("%d ",a[i]);
   	 	}

	    ```
    
    04.Declare another array with ten (10) values and compare both array whether they are same or not.
    
    	```c
     	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size = 10;
    	int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, temp = 1;

	    for(i = 0; i < size; i++)
    	     {
        	if(a[i] != b[i])
        	{
            	temp = 0;
            	break;
     	      	}
    	     }
	    if(temp == 1)
    		```
    
    05.Declare another array with five (5) values and merge two array into one array.
    
    	```c
	    int size_c = size_a + size_b;



	    for(i = 0; i < size_a; i++)
    	   {
    	    c[i] = a[i];
    	   }

	    for(i = 0, j = size_a; i < size_c; i++,j++)
    		{
        	c[j] = b[i];
    	
		}
	    for(i = 0; i < size_c; i++)
    		{
        	printf("%d ",c[i]);
    		}
 		   ```
    
    06.Merge the elements of two sorted array.
    
    	```c
    	for(i = 0; i < size_c; i++)
    	{
        for(j = i + 1; j < size_c; j++)
        {
            if(c[i] > c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
            ```
            
    07.Split an array at K th (take input k from user) index into two different array.
    
    	```c
     	int index, i, j;

	    scanf("%d",&index);
    	if(index > 10){
        printf("Error Input");
	    }

	    for(i=0; i<index; i++){
        	b[i] = a[i];
    	}
    	size_b = index;
   	 for(i=index, j=0; i<size_a; i++, j++){
        	c[j] = a[i];
   	 }
    	size_c = size_a - index;
   	 ```
    
    08.Cyclically permute the elements of an array.
    
     ```c
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size_a = 10, capacity_a = 10;
    int i, temp;

    print_array(a, size_a);
    for(i=0; i<size_a-1; i++){
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
    print_array(a, size_a);

    ```
