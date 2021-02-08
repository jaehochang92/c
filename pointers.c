# include <stdio.h>

int main() {    
    int *x, *y;
    *x = 2;  // x is pointing 2
    y = x;  // y is pointing &x
    printf("(x, &x, *x) = (%p, %p, %d)\n", x, &x, *x);
    printf("(y, &y, *y) = (%p, %p, %d)\n", y, &y, *y);
    return 0;
}
