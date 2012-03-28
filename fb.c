#include <stdio.h>

char* f = "Fizz";
char* b = "Buzz";

void fib(int n) {
	if (n == 0) return;
	fib(n - 1);
	if (n % 15 == 0) {
		printf("%s%s\n", f, b);
	} else if (n % 5 == 0) {
		printf("%s\n", b);
	} else if (n % 3 == 0) {
		printf("%s\n", f);
	} else {
		printf("%d\n", n);
	}
}

int main(int argc, char* argv[]) {
	fib(100);
	return 0;
}


