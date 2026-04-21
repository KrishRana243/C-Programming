//Printing file inn reverse

#include <stdio.h>

#define FILENAME "Quotes.txt"

int main() {
  FILE *fp = NULL;

  int cnt = 0;
  int i = 0;

  fp = fopen(FILENAME,"r");

  if (fp == NULL)
    return -1;
  
  //move file pointer to the end of the file
  fseek(fp,0,SEEK_END);

  //get the pos of file end
  cnt = ftell(fp);

  while (i<cnt)
  {
    i++;
    fseek(fp, -i,SEEK_END);
    printf("%c",fgetc(fp));
  }

  printf("\n");
  fclose(fp);
  fp = NULL;

  return 0;
}