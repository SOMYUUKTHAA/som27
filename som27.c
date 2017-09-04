#include<stdio.h>
int main()
{
int a,b,Mulp;
printf("Enter two positive integers:\t");
scanf("%d%d",&a,&b);
Mulp= (a>b) ?a:b;
while(1)
{
if(Mulp%a==0 && Mulp%b==0)
{
printf("The LCM of %d and %d is %d",a,b,Mulp);
break;
}
++Mulp;
}
return 0;
}
