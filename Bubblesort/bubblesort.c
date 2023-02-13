#include<stdio.h>
void bubble_sort(int[],int);
int main(){
int a[6]={21,55,99,12,66,85};
bubble_sort(a,6);
return 0;
}
void bubble_sort(int a[],int size){
int i,j,temp;
for(i=0;i<size;i++){
for(j=0;j<size-i-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}}}
printf("after sorting");
for(i=0;i<size;i++){
printf("%5d",a[i]);
}
return ;
}
