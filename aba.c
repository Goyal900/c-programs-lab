#include<stdio.h>
int main()
{
int m;
int s;
int e;
int h;
int sum;
int avg;
float per;
printf("enter maths no");
scanf("%d",&m);
printf("enter science no");
scanf("%d",&s);
printf("enter english no");
scanf("%d",&e);
printf("enter hindi no");
scanf("%d",&h);
sum=m+s+e+h;
avg=sum/4;
printf("sum=");
printf("%d",sum);
printf("average=");
printf("%d",avg);
per=((float)sum/400)*100;
printf("percentage=");
printf("%f",per);
return 0;
}
