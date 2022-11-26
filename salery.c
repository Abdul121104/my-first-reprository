#include <stdio.h>
int main(){
	float salary,basic,da,hra;
	printf("enter basic pay");
	scanf("%f",&basic);
	da=basic*0.37;
	hra=basic*0.37;
	if (basic>70000);
	{
		hra=15000;
	}
	salary=basic+hra+da;
	printf("\n your Hra is %f",hra);
	printf("\n your salary is %f",salary);
	return 0;
}
