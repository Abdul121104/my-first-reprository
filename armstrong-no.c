#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,d,e;
	printf("enter a number");
	scanf("%d",&a);
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	e=pow(b,3)+pow(c,3)+pow(d,3);
	printf("%d",e);
	if(e%3==0){
		printf("it is an armstrong number");
	}
	else if (e%3!=0){
		printf("t is not an armstrong no");
	}
	return 0;
}
