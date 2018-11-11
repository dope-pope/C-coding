#include<stdio.h>
int main()
{
    int a,b,i=0,arr[10],c=0,d=0,e=0,f=0,g=0;
    printf("Enter any no from 1 to  5");
    for (a=0;a<10;a++)
    {
        scanf("%d",&arr[a]);
    }
    for (a=0;a<10;a++)
    {


    {
        if (arr[a]==1)
            c++;
    }
    {
        if (arr[a]==2)
            d++;
    }
    {
        if (arr[a]==3)
            e++;
    }
    {
        if (arr[a]==4)
            f++;
    }
    {
        if (arr[a]==5)
            g++;

    }
    }
    int prr[]={c,d,e,f,g};
    for (b=0;b<5;b++)
    {
        if (i<prr[b])
        i=prr[b];
    }
    printf("%d",i);
    return 0;




}
