# include <stdio.h>
# define N 10


// void insertionSort(int, int);
// void printIntArray(int, int);
void printIntArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%4d ", a[i]);
    printf("\n");
}
void insertionSort(int a[], int n) {
    int i, j, val;
    for (i = 1; i < n; i++) {
        val = a[i];
        j = i - 1;
        while ((j >= 0) && (a[j] > val)) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = val;
        printIntArray(a, n);
    }
}
int main(void) {
    int a[N] = {23, -3, 5, 9, 33, 87, -7, -24, 50};
    printIntArray(a, N);
    insertionSort(a, N);
}