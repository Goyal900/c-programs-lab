#include<stdio.h>
int main()
{
 int a[100],size,i,item;
printf("enter the size of array");
scanf("%d",&size);
for(i=0;i<size;i++){
scanf("%d",&a[i]);
}
printf("insert the element in array in begining\n");
scanf("%d",&item);
size++;
for(i=size;i>1;i--){
a[i-1]=a[i-2];
}
a[0]=item;
printf("after inserting an element in array in begining\n");
for(i=0;i<size;i++)
{
printf("%d ",a[i]);
}
}
