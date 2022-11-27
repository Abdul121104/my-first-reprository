#include <stdio.h>
int main(){
	char c,ch,cg;
	printf("\n enter two charecter");
	scanf("%c%c",&ch,&cg);
	int a=ch;
	int b=cg;
	if (a==b+32){
		printf("it is ucase of lcase");
	}
	else if (b==a+32) {
		printf("it is ucase and lcase");
	}
    else if (b!=a){
		printf("it is not ucase and lcase of same alphabet");
	} 
	return 0;
}
