#include<stdio.h>
int main(){
int count=0,n,i;
printf("enter n");
scanf("%d",&n);
printf("n is %d" ,n);
for(i=1;i<=n;i++){
if(n%i==0)
count++;
}
if(count==2)
printf("num is prime");
else
printf("num is not prime");
return 0;
}

