#include<stdio.h>
void main()
{
	int a[100],i,pos,size,item;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter array elements\n");
	for(i=0;i<size;i++){
	scanf("%d",&a[i]);
}
printf("enter position that we want to enter:\n");
scanf("%d",&pos);
printf("enter item that we want to insert\n");
scanf("%d",&item);
for(i=size;i>=pos;i--){
	a[i]=a[i-1];
}
a[pos]=item;
size=size+1;
printf("result array elements:\n");
for(i=0;i<size;i++){
	printf("%d ",a[i]);
} 
}
