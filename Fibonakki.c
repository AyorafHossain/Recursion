#include<stdio.h>
int main()
{
    int result,n,i;
    scanf("%d",&n);
    printf("Fibonakki series of %d number \n:",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibonakki(i));
    }
    return 0;

}
 int fibonakki(int x)
 {
     if(x==0)
        return 0;
     else if(x==1)
        return 1;
     else
        return (fibonakki(x-1)+fibonakki(x-2));
 }

