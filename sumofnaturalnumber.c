#include<stdio.h>

int main(){
	int b;
	int sum =0;
	 printf("Enter a number: ");
	 scanf("%d",&b);
	 
	 for(int i=0;i<=b;i++){
	 	sum = sum + i;
	 	printf("The sum of square of %d natural number is: %d \n",i,sum);
	 	
	 }
}
