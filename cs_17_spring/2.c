#include <stdio.h>
#include <locale.h>

int main()
{
 setlocale(LC_CTYPE, "Russian");
 int day, month, x;
 printf("Введите дату рождения через пробел\n");
 scanf("%i %i", &day, &month);
 x=month;
 month=day;
 day=x;
 printf("%i %i\n", day, month);

    return 0;
}
