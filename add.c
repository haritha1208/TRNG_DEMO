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
printf("This is to try the push from other branch");
printf("%d",addf(x,y));
return 0;
}
