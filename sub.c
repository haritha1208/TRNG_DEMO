#include<stdio.h>
int subf(int a,int b){
int res;
return res = a - b;
}

int main()
{
int x,y;
printf("Enter the numbers:");
scanf("%d%d",&x,&y);
printf("%d",subf(x,y));
return 0;
}
