#include<stdio.h>
int main()
{
    int c=0,d=0,a,b,arr[3],prr[3];
    for (a=0;a<3;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (b=0;b<3;b++ )
    {
        scanf("%d",&prr[b]);
    }
    for (int i=0;i<3;i++)
    {
        if (arr[i]>prr[i])
        {
            c++;
        }
        else if (arr[i]<prr[i])
        {
            d++;

        }

    }
    printf("%d  %d",c,d);
    return 0;

}
