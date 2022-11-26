#include<stdio.h>
int main() {
	int side1,side2,peri;
	printf("enter side1 of rectangle");
	scanf("%d",&side1);
	printf("enter side2 of rectangle");
	scanf("%d",&side2);
	peri=2*(side1+side2);
	printf("perimetre of rec =%d",peri);
 	return 0;
}

