#include<stdio.h>
int main(){
    char num[1000];
    int k;
    scanf("%s %d",&num,&k);
    int digits=0;
    for(int i=0;num[i]!='\0';i++){
        digits++;
    }   
 printf("%d",digits);
    
    
    return 0;




}