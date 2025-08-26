#include<stdio.h>

void main(){
	int a;
	int b;
	int c;
	printf("Enter a number A: ");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		c = b++;
		printf("The sum is: %d \n",c);
		
	}

}

