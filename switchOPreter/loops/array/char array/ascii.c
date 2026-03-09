#include<stdio.h>
int main(){
    char str[5];
   fgets(str,5,stdin);
    for(int i=0;i<5;i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
   printf("%s",str);
}