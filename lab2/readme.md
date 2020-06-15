# LAB ASSIGNMENT-02 1D ARRAY:-

* ## Insert

* ## Update

* ## Search

* ## Delete

01.Insert any value at tenth index of the array,and print the whole array..
```c
#include<stdio.h>
int main(){
int arr[10];
int i,n=16,size=10;
for(i=0;i<size;i++)
}
```
02.Insert a value X[ take input X from user ]in the array at the end of currently stored elements.
```c
int i,size,X;
scanf("%d ",&X);
arr[size]=X;
size++;
```
03.Insert a value X (take input X from user)in the array at Kth (take input K from user ) index and shift all other value to right.And print the whole array.
```c
int n=3;
scanf("%d ",&X);
for(i=size;i>=n;i++)
{
arr[i]=arr[i-1];
}
size++;
arr[n-1]=X;
```
04.Insert a value X(take input X from user)in the array at kth(take input K from user)index and shift all other value to right.And print the whole array.
```c
int x,i,k;
scanf("%d ",&k);
scanf("%d ",&x);
for(i=size;i>=k;i--)
{
arr[i]=arr[i-1];
}
size++;
arr[k-1]=x;
```
05.Update fifth index with another value.And print the whole array.
```c
int i,n=5,x=2013;
for(i=0;i==n;i++)
{
arr[i]=arr[i-1];
}
arr[n-1]=x;
```
06.Update kth (take input k from user)index with the value x(take input x from user).Any print the whole array.
```c
int x,i,k;
scanf("%d ",&k);
scanf("%d ",&x);
for(i=size;i==k;i++)
{
arr[i]=arr[i-1];
}
arr[k-1]=x;
```
07.Search a value x(take input x from user)in the array and print "found"if x found in the array otherwise print "notfound".
```c
int i,x,flag=0;
scanf("%d ",&x);
for(i=0;i<size;i++)
{
if (arr[i]==k){
flag++;
}
  }
  if(flag==1){
  printf("Found"):
  }
  else{
  printf("Not Found");
  }
  ```
08.Search a value x(take input x from user)in the array and print the index if x found in the array otherwise print "-1".
```c
int i,x,flag=0;
scanf("%d ",&x);
for(i=0;i<size;i++)
{
if (arr[i]==x){
flag++;
}
}
if(flag!=1){
printf("-1"):
}
}
```
09.Delete a value from kth index(take input k from user)from the array shift all other value to left .And print the whole array.
```c
int i,k;
scanf("%d ",&k);
for(i=k-1;i<size;i++)
{
arr[i]=arr[i+1];
}
size--;
```
10.Delete a value x(take input x from user)from the array shift all other value to left.If x is not present in the given array print element not found.Only delete the first occurrence of the value .And print the whole array.
```c
if(x==arr[j]){
for(i=x-1;i<size;i++){
arr[i]=arr[i+1];
}
flag++;
}
}
size--;
if(flag!=1)
```
11.Delete a value x(take input x from user)from the array shift all other value to left.If x is not present in the given array print element not found.Delete all the occurrence of the value .And print the whole array.
```c
 if(x==arr[j]){
 for(i=j;i<=size;i++){
 arr[i]=arr[i+1];
}
size--;
flag++;
j--;
if(flag==0)
```
