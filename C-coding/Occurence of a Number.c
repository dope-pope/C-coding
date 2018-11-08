#include<stdio.h>
int main()
{
    int a,b,arr[10],c=0;
    for (a=0;a<10;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<10;a++)
    {
        if (arr[a]==1)
            c++;
    }
    printf("%d",c);

}
