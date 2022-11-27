#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is larger",a);
	}
	else if (a<b){
		printf("%d is larger",b);
	}
	else if (a==b){
		printf("%d and %d is same",a,b);
	}
	return 0;
}
