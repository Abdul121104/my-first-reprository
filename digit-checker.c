#include <stdio.h>
int main(){
	char ch;
	printf("enter a charecter");
	scanf("%c",&ch);
	int a=ch;
	if(a==49){
		printf("it is a digit");
	}
	else {
		printf("it is not digit");
	}
	return 0;
}
