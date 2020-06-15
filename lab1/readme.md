# Assignment-1(Array)

## *ARRAY(Declare, Initialize,Access,Input,Output)*
1. [Array SCAN values !(From User).](https://github.com/1834902579/cse214/blob/master/lab1/1.c)
```c
int n,i=0;
scanf("%d ",&n);
while(scanf("%d ",&a[i])==1){
i++;
if (i>n){
printf("Array overflow\n);
break;
}
} 
```

2. [Array scan values Until END OF FILE](https://github.com/1834902579/cse214/blob/master/lab1/2.c)
```c
int i=0,j;
while(scanf("%d ",&a[i])!=EOF){
i++;
}
```
3. [Array scan values Until user input ZERO ](https://github.com/1834902579/cse214/blob/master/lab1/3.c)
```c
int i=0,j;
for(i=0;i<100;i++){
scanf("%d ",&a[i]);
if(a[i]==0){
break;
}
```
4. [Print array each Element in NEWLINE](https://github.com/1834902579/cse214/blob/master/lab1/4.c)
```c
int i,n;
scanf("%d ",&n);
for(i=0;i<n;i++){
scanf("%d ",&a[i]);
}
```
5. [Print array each Element in separeted by SPACE ](https://github.com/1834902579/cse214/blob/master/lab1/5.c)
```c
int i,n,j;
scanf("%d ",&n);
for(i=0;i<n;i++){
scanf("%d ",&a[i]);
}
```
6. [Print array each Element in separeted by COMMA ](https://github.com/1834902579/cse214/blob/master/lab1/6.c)
```c
int i,n,j;
scanf("%d ",&n);
for(i=0;i<n;i++){
scanf("%d ",&a[i]);
}
```
7. [print array in REVERSE order ](https://github.com/1834902579/cse214/blob/master/lab1/7.c)
```c
int i,n=10,j;
for(i=0;i<j;i++){
scanf("%d ",&a[i]);
}
```
