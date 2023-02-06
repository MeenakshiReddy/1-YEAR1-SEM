#include<stdio.h>
int main(){
int rows,number=1,i,j;
printf("enter rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++){
for(j=1;j<=i;j++){
printf("%d ",number++);
}
printf("\n");}
return 0;
}
