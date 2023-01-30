#include<stdio.h>
int factorial(int);
int main(){
int n=5;
int res=factorial(n);
printf("%d",res);
return 0;
}
int factorial(int n){
if(n==0||n==1)
return 1;
else
return n*factorial(n-1);
}

