#include<stdio.h>
int sum(int,int);
int sub(int ,int);
int div(int ,int );
int mul(int,int);
void main()
{
        int a,b;
printf("enter two num\n");
scanf("%d %d",&a,&b);


printf("sum=%d \n",sum(a,b));
printf("sub=%d \n",sub(a,b));
printf("mul=%d \n",mul(a,b));
printf("div=%d \n",div(a,b));


}
 
