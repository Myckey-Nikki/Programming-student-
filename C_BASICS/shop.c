#include <stdio.h>

int updatestock(int arr[], int d, int sold) {
    if(d >= 0 && d < 100)
        arr[d] -= sold;
    if(arr[d] < 0) arr[d] = 0;
    return arr[d];
}

void danger(int arr[], int s) {
    if(arr[s] > 0 && arr[s] <= 5)
        printf("Danger of %d is %d\n", s, arr[s]);
}

void outofstock(int arr[], int s) {
    if(arr[s] == 0)
        printf("Out of stock %d\n", s);
}

int main() {
    int arr[100];
    for(int i=0; i<100; i++) {
        arr[i] = i % 10 + 23;
    }
    int  d, s;
    scanf("%d %d ", &d, &s);

    int newstock = updatestock(arr, d, s);
    printf("Updated stock at %d = %d\n", d, newstock);

    danger(arr, d);
    outofstock(arr, d);

    return 0;
}
