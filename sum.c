#include<stdio.h>
int main()
{
int a[3][3];
int i,j,sum=0;
printf("enter your array elements");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
sum=sum+a[i][j];
}}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d",a[i][j]);}
printf("\n");
}
printf("%d",sum);
}
