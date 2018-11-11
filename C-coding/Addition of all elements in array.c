#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&b);
    long long int arr[b],c=0;
    for (a=0;a<b;a++)
    {
        scanf("%lld",&arr[a]);
    }
    for (a=0;a<b;a++)
    {
        c=c+arr[a];
    }
    printf("%lld",c);
    return 0;
}
