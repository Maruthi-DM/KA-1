
/*#include<stdio.h>
int main()
{
    int i,n,num1=0,num2=1,num3;
    printf("*****fib series******\n");
    scanf("%d",&n);
    printf("%d\n",num1);
    printf("%d\n",num2);
    for(i=2;i<n;i++)
    {
        num3=num1+num2;
        printf("%d\n",num3);
        num1=num2;
        num2=num3;

    }
}*/
/*#include<stdio.h>


int main()
{
    char str1[30],str2[30];
    int i,j=0;
    puts("Enter string1");
    gets(str1);
    puts("Enter string2");
    gets(str2);
    for(i=strlen(str1);i< (strlen(str1) + strlen(str2)); i++)
    {
        str1[i] = str2[j];
       j++;
    }
    printf("After concatination: %s\n",str1);
    return 0;
}*/
/*#include<stdio.h>
#include<string.h>

int main()
{
    char str1[30],str2[30];
    int i=0,equal = 0;
    puts("Enter string1");
    gets(str1);
    puts("Enter string2");
    gets(str2);
    if(strlen(str1) == strlen(str2))
    {
        while(str1[i] != '\0')
        {
            if(str1[i] == str2[i])
                equal = 1;
            else
            {
                equal = 0;
                break;
            }
            i++;
        }
        if(equal)
        puts("Strings are equal");
        else
        puts("Strings are not equal");

    }
    else
    {
         puts("Strings length are not equal");
    }


    return 0;
}*/
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


































