#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a][a],d=0,e=0;
    for (int b=0;b<a;b++)
    {
     for (int c=0;c<a;c++)
     {
         scanf("%d",&arr[b][c]);

     }

    }
     for (int b=0;b<a;b++)
    {
        d+=arr[b][b];
         printf("d=%d\n",d);

         e+=arr[b][a-b-1];
        printf("e=%d\n",e);


    }

    printf("%d",abs(d-e));


    return 0;
}
