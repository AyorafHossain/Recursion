#include<stdio.h>
int main()
{
    int result,n;
    scanf("%d",&n);
    result=fact(n);
    printf("Factorial of %d = %d ",n,result);
    return 0;

}
 int fact(int x)
 {
     if(x==1)
        return 1;
     else
        return x*fact(x-1);
 }
