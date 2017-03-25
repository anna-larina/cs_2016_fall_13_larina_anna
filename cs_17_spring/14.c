#include <stdio.h>
#include <string.h>

char reverse( char *a)

{
    int i,z, j=0;
    char c[1000];
    z=strlen(a);
    for(i=z-1;i>=0;--i)
    {
          c[j]=a[i];
           j++;
    }
    
    for(i=0;a[i]!='\0';++i)
    {
           a[i]=c[i];
    }
      return *a;
    }

int main()
{
     int i;
     char r[1000];
     gets(r);
     reverse(r);
     for( i=0;r[i]!='\0';++i)
      {
         printf("%c",r[i]);
      }
      
      printf("\n");
      
return 0;
}
