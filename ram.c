#include<stdio.h>
int main(){
int n,temp;
printf("enter the total no. of elements\n");
scanf("%d",&n);
int a[n],i,j;
for(i=0;i<n;i++){
printf("enter the %d element",i);
scanf("%d",&a[i]);
}
for(i=0,j=n-1;i<n/2;i++,j--)
{ temp=a[i];
a[i]=a[n-1-i];
a[j]=temp;
}
for(i=0;i<n;i++){
printf("%d  ",a[i]);}
return 0;
}

