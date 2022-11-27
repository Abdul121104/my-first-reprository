#include <stdio.h>
int main(){
	char e,d,c,ch;
	printf("\n enter onearecter");
	scanf("%c",&ch);
	int a=ch;
	if(c=a>=65&&a<=90)
	{
		c=1;
	}
	else if (c=a>=97&&a<=122){
		c=2;
	}
	switch(c){

		case 1:
			printf("\nis an Upper case alphabet");
			break;
		case 2:
			printf("\nit is a lowerr case alphabat");
			break;
		default :
			printf ("\nit is aspeacial charecter or a digit");
	}
	return 0;
}
