#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],b,c=0,d=0,e=0;
    for (b=0;b<a;b++)
    {
        scanf("%d",&arr[b]);
    }
    for (b=0;b<a;b++)
    {
        if (arr[b]>0)
            {
                c++;
            }
            if (arr[b]<0)
            {
                d++;
            }
            if (arr[b]=0)
            {
                e++;
            }

    }
    printf("%f\n",(float)c/a);
    printf("%f\n",(float)d/a);
    printf("%f",(float)e/a);
    return 0;
}

