#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
char arr[a];
memset(arr,"#",a*sizeof(char));

for(int i=0;i<a;i++){
    for(int j=0;j<a-2;j++){
        arr[j]=" ";

    }

    for(int i=0;i<a;i++){
        printf("%c",arr[i]);
    }

}
}
