#include<stdio.h>
int main(){
    long long int D;
    printf("enter number:");
    scanf("%lld",&D);
    long long int H;
       printf("enter number:");
    scanf("%lld",&H);
              if (D==0||H==0){
        printf("-1");
        return 0;
    }
 int a=0;

    while(D!=H){
 
        if(D<H)
      {  D++;
        a++;}
       else{
       H++;
a++;}
   
    }
  
    printf("%lld",a+D);
   
      
return 0;
}