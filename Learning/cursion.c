
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, q, rem, fac=1, result=0, mul=1;
    printf("enter number\n");
    scanf("%d",&n);

    q = n;
    while(q != 0)
    {
         rem = q%10;
   while(rem != 0)
   {
       fac = fac*rem;
       rem--;

   }
   result = result + fac;
    q = q/10;
    fac = 1;

    }
    printf("%d result\n",result);

    if(result == n)
        printf("%d is strong number\n",n);

    return 0;
}