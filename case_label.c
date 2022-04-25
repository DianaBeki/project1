#include <stdio.h>
int main ()
{
int a = 3, b = 4, c = 6;
switch(a+b*c)
{

case 1 : printf("choice is a");
break;
case 2: printf("choice is b");
break;
case 3: printf("choice is c");
break;
default : printf("default");
break;

}

}