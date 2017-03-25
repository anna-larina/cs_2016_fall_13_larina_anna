#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 void copy(char *a,char *b)
{ 
  char str[1000];
  FILE *A,*B;
 
  A = fopen(a,"r");
  B = fopen(b,"w");
  char i;
  while((i=fgetc(A))!=EOF)
    {
      fputc(i,B);
    }
}
 
  int main()
  {
  	setlocale(LC_CTYPE, "Russian");
    char x[1000],y[1000];
    printf("Путь к файлу, из которого копировать:\n");
    gets(x);
    printf("Путь к файлу, в который копировать:\n");
    gets(y);
    copy(x,y);
    printf("Готово!");
  return 0;
}
