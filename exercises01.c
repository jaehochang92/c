#include <stdio.h>
void foo(int a);  // function prototype can be declared before its definition


int fib(int n) {
	if (n <= 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int sum(int n) {
	int ans = 0;
	for (; n > 0; n--)
		ans += n;
	return ans;
}

int main(void) {
	// fibonacci
	printf("\n");
	int i = 1;
Lp:
	printf("f[%02d] = %d\n", i, fib(i));
	printf("Next Lp: ");
	
	if (i < 10) {
		i++;
		goto Lp;
	}
	// calculating sum
	printf("\nsum of 1~5 = %d", sum(5));

	return 0;
}