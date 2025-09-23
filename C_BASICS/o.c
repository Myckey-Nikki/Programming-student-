#include<stdio.h>
int is_Magical(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return is_Magical(n-1)+is_Magical(n-2);
}
int main(){
int n;
scanf("%d",&n);
is_Magical(n);
printf("%d",is_Magical(n));


    return 0;
}