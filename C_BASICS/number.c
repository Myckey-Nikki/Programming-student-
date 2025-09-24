#include<stdio.h>
#include<math.h>
int is_magical(int a){
    int digits=0;
    int temp=a;
    while(temp>0){
        digits++;
        temp=temp/10;
    }
temp=a;
    int sum=0;
    int n=0;
    while(temp>0){
        n=temp%10;
        sum+=pow(n,digits);
        temp=temp/10;
    }
    if(a==sum)return sum;
    return 0;
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        if(i==is_magical(i))
        printf("%d\n",i);
    }

    return 0;
}