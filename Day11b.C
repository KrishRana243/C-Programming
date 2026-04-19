/*Tokenizing*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "You either suffer - pain of discipline - or - the pain of regret";
    const char s[2] = "-";
    char *token;

    token = strtok(str,s); //Get first token

    while (token != NULL){
        printf("%s",token);

        token = strtok(NULL,s);
    }

}