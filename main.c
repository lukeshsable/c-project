/// WAP to generate max from digits of entered number

#include<stdio.h>
int main ()
{
   int n,max;
   printf(" enter any number");
   scanf("%d",&n);
    for(max=0;n!=0;n=n/10)
{

        if(n%10>max)
    {
        max=(max*10)+(n%10);
    }
}
    printf("\n maximum number is %d",max);
    return 0;
}
