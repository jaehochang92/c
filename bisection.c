# include<stdio.h>
# include<math.h>

int main(void)
{
    printf("%d", bisection(f, 2));
    return 0;
}
double bisection(double (*f) (double), double x)
{
    return (*f)(x);
}
double f(double x)
{
    return pow(x, 2);
}
