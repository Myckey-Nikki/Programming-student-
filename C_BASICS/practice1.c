#include<stdio.h>
void is_palindrome(char temp[])
{ int d=0;
    while (temp[1000]='\0')

    {
     d++;
    }
    
for(int i=0;temp[i]!='\0';i++){
    if(temp[i]==temp[d-i-1])
    printf("is_palindrome");
}
}
 int main(){
char st[1000];
char temp[1000];
for (int i = 0; st[i] !=0; i++)
{
    scanf("%1000s",&st);
    temp[i]=st[i];
}
int uppercase=0;
int lowercase=0;
int digit=0;
char special[]='!@#$%^&*';
for (int i = 0;st[i]!=0; i++)
{
    if(temp[i]>=65&&temp[i]<=90)
    uppercase=1;
    else if(temp[i]>=97&&temp[i]<=122)
    lowercase=1;
   else if(temp[i]>=48&&temp[i]<=57)
   digit=1; 
   
}

if (uppercase==1&&lowercase==1&&digit==1)
printf("Strong");
else printf("Weak");




return 0;
}