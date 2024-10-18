#include<stdio.h>
int main()
{
    int n,i,num1=0,num2=1,num3;
    printf("Enter the Elements\n");
    scanf("%d",&n);
    printf("%d\n%d\n",num1,num2);
    for(i=2;i<n;i++)
    {
        num3=num1+num2;
        printf("%d\n",num3);
        num1=num2;
        num2=num3;
    }
}


































