#include<stdio.h>
void main(){
int a[5]={10,20,30,40,50};
int sum=0,i,*ptr;
ptr=a;
for(i=0;i<5;i++)
{
sum=sum+(*ptr);
ptr++;
}
printf("sum of array elements is %d",sum);
return;
}

