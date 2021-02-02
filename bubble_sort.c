#include <stdio.h>
#define N 10

float a, b, c;
char* x, y;

void bubbleSort( int *, int );
void printIntArray( int *, int );

int main( void )
{
  int a[N] = { 23, -3, 5, 9, 11,33, 87, -7, -24, 50 };
  printIntArray( a, N );
  bubbleSort( a, N );
  return 0;
}

void printIntArray( int a[], int n )
{
  int i;
  for( i = 0; i < n; i++)
    printf("%4d ", a[i]);
  printf("\n");
}

void bubbleSort( int a[], int n )
{
  int i, j, temp;
  for( i = n-1; i > 0; i--)
  {
    for( j = 0; j < i; j++)
    {
      if( a[j] < a[j+1] )
      {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
    printIntArray( a, n );
  }
}

