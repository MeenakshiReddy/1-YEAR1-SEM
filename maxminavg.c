#include<stdio.h>
int main(){
int a[5]={10,20,30,40,50};
int i,avg,max=a[0],min=a[0],sum=0;
for(i=1;i<5;i++)
{
if(a[i]>max)
{
max=a[i];
}}
for (i=1;i<5;i++)
{
if(a[i]<min)
{
min=a[i];
}}
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
avg=sum/5;
printf("%d %d %d %d",max,min,sum,avg);
return 0;}

