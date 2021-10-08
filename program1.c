#include<stdio.h>
#include<math.h>
int main()
{
int i;
float f;
char c;
scanf("%d%*c%f%c",&i,&f,&c);
printf("%d\n%f\n%c\n",i,f,c);
return 0;
}
