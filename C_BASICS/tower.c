#include<stdio.h>
int no_ways(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return no_ways(n-1)+no_ways(n-2);
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",no_ways(n));
    return 0;
}