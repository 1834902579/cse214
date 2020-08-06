#include<stdio.h>
void input_element_array(int *a,int len);


int main(){

    int *p;
    int i;
    int arr[100];
    int size = 0;

    p = &arr[0];

   input_element_array(p,size);


    return 0;
}

void input_element_array(int *a,int len){

printf("Please Enter the Element of this array: \n");
   int i=0;
 for(i=0; scanf("%d",*(a+i))!=EOF; i++){
        len++;
        }

 for(i=0; i<len; i++){
     printf("%d ",(a+i));
        }

}

