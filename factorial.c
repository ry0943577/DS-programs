#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1){
		return 1;
    }else{
		return n * factorial(n - 1);
    }
}
int main() {
    int n;
    
    printf("Enter the value: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined.\n");
    } else {
        int r = factorial(n);
        printf("Factorial of %d is %d\n", n, r);
    }

    return 0;
}
