# include <stdio.h>
# include <assert.h>


int main() {
	int x;
	x = -1;
	assert(x < 0);

	// scope of identifiers
	int a = 1, b = 2, c = 3;
	{
		printf("a = %d, b = %d, c = %d\n", a, b, c);
		b = 4;
		c = 6;
		a = b;
		printf("a = %d, b = %d, c = %d\n", a, b, c);
		{
			int c;
			c = b;
			printf("a = %d, b = %d, c = %d\n", a, b, c);
		}
		printf("a = %d, b = %d, c = %d\n", a, b, c);
	}
}