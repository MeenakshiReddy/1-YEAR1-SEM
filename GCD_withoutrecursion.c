#include<stdio.h>
void GCD(int,int);
int main(){
int a,b;
GCD(a,b);
return 0;
}
void GCD(int a,int b){
int GCD,min,i;
printf("enter values of a,b :");
scanf("%d %d",&a,&b);
min=(a<b)?a:b;
for(i=1;i<=min;i++){
if(a%i==0 && b%i==0)
GCD=i;
}
printf("gcd of given numbers is %d",GCD);
return;
} 
