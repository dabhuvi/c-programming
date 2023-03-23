#include<stdio.h>
main()
{
char *p;
p="Hello";
printf("%c",*&*p);
}


