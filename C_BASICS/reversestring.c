#include <stdio.h>

int main() {
    char arr[200];
    scanf("%s", arr);  // Read string into array
    int b = 0;

    while (arr[b] != '\0') {
        b++;
    }
    for (int i = 0;arr[i]!=0; i++)
    {
            
printf("%c",arr[b-i-1]);
    }

   
    
    return 0;
}