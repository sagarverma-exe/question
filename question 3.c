#include<stdio.h>
#include<conio.h>

void main()
{
 int x,y,z;
printf("Enter your maths mark:");
scanf("%d",&x);
printf("Enter your english mark:");
scanf("%d",&y);
printf("Enter your science mark:");
scanf("%d",&z);

if(x>100)
{
printf("enter any vaild mark");
}
else if(y>100)
{
printf("enter any vaild mark");
}
else if(z>100)
{
printf("enter any vaild mark");
}
else if(x<0)
{
printf("enter any vaild mark");
}
else if(y<0)
{
printf("enter any vaild mark");
}
else if(z<0)
{
printf("enter any vaild mark");
}
else
{
printf("Average %d",(x+y+z)/3);
}
}