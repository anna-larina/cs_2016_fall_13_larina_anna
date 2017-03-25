#include <stdio.h>
#include <string.h>

int main()
{ 
    int max, i, a;
    char c[1000];
    gets(c);
    max = (int)(c[0]);
    for (i = 0; c[i] !='\0'; i++)
    {   a = (int)(c[i]);
    
        if (a > max)
        {
            max = a;
        }
    }
    printf("Max = %i\n", max);


    return 0;
}
