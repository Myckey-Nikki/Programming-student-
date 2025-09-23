#include <stdio.h>
#include<stdlib.h>
int main() {
    int rows, cols;
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];

    printf("Enter elements for  matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("You entered:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}