#include<stdio.h>
long long int op(int p ){
    if(p==0) return 1;
    return 2*op(p-1);
}
    long long int po(int p ){
    if(p==1) return 1;
    if(p==0) return 1;
    return 2*op(p-2)+po(p-1);
}
int main(){
    long long int n;
    scanf("%lld",&n);
 long long int pow49=op(49);
    if(n==pow49){
        printf("YES\n%lld",n-pow49);
      
    }
    
    int p=1;
    while(n-po(p)>0){
        
        p++;
    }
    p--;
 if(n!=pow49){
        printf("NO\n%lld", n-po(p));
    }
      return 0;
}
