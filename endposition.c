#include<stdio.h>
int main()
{
 int a[100],size,i,item;
printf("enter the size of array");
scanf("%d",&size);
for(i=0;i<size;i++){
scanf("%d",&a[i]);
}
printf("insert the element in array\n");
scanf("%d",&item);
size=size+1;
a[size-1]=item;
printf("after inserting an element in array in end\n");
for(i=0;i<size;i++)
{
printf("%d",a[i]);
}
}
