#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N-2];
int temp[N+1];
for(int i=0;i<N+1;i++){
    temp[i]=0;
}
for(int i=0;i<N-2;i++){
    scanf("%d",&arr[i]);
    temp[arr[i]]=1;
}                                           
for(int i=1;i<N+1;i++){
    if(temp[i]==0){ 
        printf("%d\n",i);
    }
}
     return 0;

}
