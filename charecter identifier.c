#include<stdio.h>
int main()
{
char var;
int a;
printf("\nEnter a Character from keyboard");
scanf("%c",&var);
a=var;
if(a>=65&&a<=90)
{
printf("\n                        you entered %c \n                     that is Upper case alphabet",var);
}
else if(a>=97&&a<=122)
{
printf("\n                        you entered %c \n                     that is lower case alphabet",var);
}
else if(a>=48&&a<=57)
{
printf("\n                        you entered %c \n                     that is a digit",var);
}
else{
printf("\n                        you entered %c \n                     that is a symbol",var);
}
return 0;
}
