// Step 1: Start with the number N, which is engraved on the vault.
 //Step 2: For each number i from 1 to N, calculate the product of all the numbers from 1 to i (accumulating product).
 //Step 3: For each accumulated product:
// ➢ If the product is a number that can only be divided by 1 and itself, it's considered "pure".
 //➢ If the product ends in a 6 or 4, it's considered "special".
// ➢ If the product ends in 0, it's considered "neat".
 //Step 4: Sum all the "pure" products, "special" products, "neat" products you found in Step 3.
 //Step 5: Keep repeating the steps 1 to 4 after iteratively increasing the (current value of) N by 1, if any of the below two 
//conditions are met:
 //➢ If the sum (from Step 4) is divisible by 4 and it does not end with two zeros.
 //➢ when the sum ends with two zeros, if the sum (from Step 4) is divisible by 4 before and after removing the two 
//zeros.

 //Step 6: The final sum is the secret code to unlock the vault.


//for large integers use long long int



#include <stdio.h>


int factorial(int n) {
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;

    // first sum
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }

    // condition check
    if ((sum % 4 == 0 && sum % 10 != 0) || (sum / 100 % 4 == 0)) {
        n = n + 1;
        sum = 0;  // reset sum

        for (int i = 1; i <= n; i++) {
            sum += factorial(i);
        }
    }

    printf("%d\n", sum);
    return 0;
}
