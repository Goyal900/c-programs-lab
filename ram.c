#include<stdio.h>
int main()
{
int n, i,j;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{ scanf("%d",&a[i]);
}
for(j=0;j<n;j++){
printf("%d",a[j]);
}
return 0;
}

