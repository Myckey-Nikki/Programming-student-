#include<stdio.h>
#include<math.h>


int main(){
    

int n;
scanf("%d",&n);
int d=0;
int digits=0;
int sum=0;

int temp=n;
while (temp>0)
{temp/=10;
    digits++;
    
}
temp=n;
while(temp>0){
    d=temp%10;
    sum+=pow(d,digits);
    temp/=10;
}
if(sum==n)
printf("TRUE");
else
printf("FALSE");
return 0;
}
