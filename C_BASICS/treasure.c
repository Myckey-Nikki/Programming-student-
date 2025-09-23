// Given an array of n integers, rotate the array to the right by k steps, where k is non-negative.
//For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
//Rotating n times brings the array back to its original position.
//So we only need the remainder when dividing k by n.
//For example:

//If k = 3 and n = 7, → k = 3

//If k = 10 and n = 7, → k = 3

#include<stdio.h>


int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   k=k%n;
for (int i = n-k; i < n; i++)
{
    printf("%d ", arr[i]);
}
for (int i = 0; i < n-k; i++)
{
    
    printf("%d ", arr[i]);
}



      return 0;
}