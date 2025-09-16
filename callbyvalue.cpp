#include<stdio.h>

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("Inside the Swap X and Y: %d and %d\n",*x,*y);
}

int main(){
	int c=10;
	int d=20;
	printf("Value of C and D before swapping: %d and %d\n",c,d);
	swap(&c,&d);
	printf("Value of C and D after swapping: %d and %d",c,d);
	return 0;
}


