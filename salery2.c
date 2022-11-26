#include<stdio.h>
int main(){
int a,b,c;
printf("\n Enter three integer numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c){
printf("\n %d is largest number",a);
}
else{
printf("\n %d is largest number",c);
}
}
else
{
if(b>c){
printf("\n %d is largest number",b);
}
else{
printf("\n %d is largest number",c);
}
}
return 0;
}
