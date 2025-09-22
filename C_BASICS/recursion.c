#include <stdio.h>
int isForbidden(int n){
    if(n==0)return 0;
    if (n==1)return 1;
    return isForbidden(n-1)+isForbidden(n-2);
}

int main() {
int n;
scanf("%d",&n);
isForbidden(n);
printf("%d",isForbidden(n));



    return 0;
}