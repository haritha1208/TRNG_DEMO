#include<stdio.h>
int addf(int a,int b)
{
int res;
return res = a + b;
}
int main(){
int x,y;
printf("Enter the numbers:");
scanf("%d%d",&x,&y);
printf("ADDITION of two numbers is:");
printf("%d",addf(x,y));
return 0;
}
