#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=n-1;i>=1;i--){
    for (int j = 1; j <=n-i; j++)
    {
        printf(" ");
    }
    for (int k = 1; k <=2*i-1 ; k++)
    {
       if(i%2==0) printf("%c ",'A'+k-1);
else printf("%d ",k);
    }
    printf("\n");
}
for(int i=0;i<n;i++){
    for (int j = 1; j <=n-i; j++)
    {
        printf(" ");
    }
    for (int k = 1; k <=2*i-1 ; k++)
    {
           if(i%2==0) printf("%c ",'A'+k-1);
else printf("%d ",k);
    }
    printf("\n");

}
return 0;
}