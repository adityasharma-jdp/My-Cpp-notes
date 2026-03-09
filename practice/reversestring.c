#include<stdio.h>
#include<string.h>
int main(){
char str[10]="aditya";
int n=strlen(str);
int vowel=0;
for(int i=0;i<n;i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        vowel++;
    }
}
printf("%d",vowel);
}