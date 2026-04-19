// enum 

#include <stdio.h>

int main(){
    enum Company {GOOGLE, FACEBOOK, APPLE, MICROSOFT = 10, IBM, ORACLE};
    enum Company google = GOOGLE;
    enum Company facebook = FACEBOOK;
    enum Company apple = APPLE;
    enum Company microsoft = MICROSOFT;
    enum Company ibm = IBM;
    enum Company oracle = ORACLE;

    printf("The value of google is: %d\n", google);
    printf("The value of facebook is: %d\n", facebook);
    printf("The value of apple is: %d\n", apple);
    printf("The value of microsoft is: %d\n", microsoft);
    printf("The value of ibm is: %d\n", ibm);
    printf("The value of oracle is: %d\n", oracle);
}