#include<stdio.h>
int main(){
	float x,y,z;
	printf("Here You Can Calculate S.T(Simple Intrest)\n");
	printf("Enter Your Principal :");
	scanf("%f",&x);
	printf("Enter Your Rate :");
	scanf("%f",&y);
	printf("Enter Your Time :");
	scanf("%f",&z);
	printf("S.I = %f ",(x*y*z)/100);
	return 0;
}
