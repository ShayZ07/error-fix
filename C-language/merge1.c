#include<stdio.h>

int fact(int n);

int main(){
int n;
printf("Enter your number: ");
scanf("%d", &n);
	if(n<0){
		printf("INVLAID NUMBER");
	}
	else if(n==0){
		printf("The factorial of 0 is 1.");
	}
	else{
		printf("The factorial of the number is: %d", fact(n));
	}
	return 0;
}
