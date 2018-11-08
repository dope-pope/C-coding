#include<stdio.h>
int swap( int *a, int *b)
{
   int c=*a;
   *a=*b;
   *b=c;


}
int main()
{
     int e,f;
     scanf ("%d%d",&e,&f);
     swap (&e,&f);
  printf("%d \n%d",e,f);
     return 0;
}
