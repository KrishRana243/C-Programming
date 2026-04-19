/*String Manipulation: String Length, Concatenation, Comparison*/
#include <stdio.h>
#include <stdbool.h>

int strLen(const char string[]);
void concat(char result[],const char str1[],const char str2[]);
bool equalStrings(const char s1[],const char s2[]);

int main(){
    const char word1[] = "VENI.";
    const char word2[] = "VIDI.";
    const char word3[] = "VICI.";
    char result[40];

    printf("%d  %d  %d\n",strLen(word1),strLen(word2),strLen(word3));

    concat(result,word1,word2);
    printf("\n%s",result);

    printf("\n%d",equalStrings("DELHI","delhi"));

    return 0;
}

int strLen(const char string[])
{
    int count = 0;

    while (string[count] != '\0')
    ++count;

    return count;
}

void concat(char result[],const char str1[],const char str2[])
{
    int i,j;
    for (i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; ++j)
    {
        result[i+j] = str2[j];
    }

        result[i+j] = '\0';
}

bool equalStrings(const char s1[],const char s2[])
{
    int i = 0;
    bool isEqual = false;

    while (s1[i] == s2[i] && 
           s1[i] != '\0' && 
           s2[i] != '\0')
    ++i;

    if (s1[i] == '\0' && s2[i] == '\0')
    isEqual = true;
    else
    isEqual = false;

    return isEqual;
}
