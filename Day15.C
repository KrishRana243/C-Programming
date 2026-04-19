#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    char *text = NULL;

    printf("Enter the limit of the text: \n");
    scanf("%d", &size);

    getchar(); // consume leftover newline

    text = (char *)malloc(size * sizeof(char));

    if (text != NULL)
    {
        printf("Enter some text: \n");
        fgets(text, size, stdin);

        printf("Inputted text is: %s\n", text);
    }

    free(text);
    text = NULL;

    return 0;
}