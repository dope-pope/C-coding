#include<stdio.h>
int main()
{
        int a=0,b,i;
    printf("Enter the size of arrary");
    scanf("%d",&i);
    int arr[i];
    for (b=0;b<i;b++)
    {
        scanf("%d",&arr[b]);
    }
    for (b=0;b<i;b++)
    {
        if (a<=arr[b])
            a=arr[b];

    }
    printf("%d",a);
    return 0;

}
