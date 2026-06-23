#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    fgets(s,100,stdin);
    int left=0,i=0;
    while(s[i] != '\0'){
        if(s[left] != ' '){
            s[i++] = s[left];
            left++;
        }
        else{
            left++;
        }
    }
    s[i]='\0';
    printf("%s",s);
    return 0;
}