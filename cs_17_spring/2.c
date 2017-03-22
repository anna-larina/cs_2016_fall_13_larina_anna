#include <stdio.h>

int main()
{
 int day, month, x;
 printf("Введите дату рождения через пробел\n");
 scanf("%i %i", &day, &month);
 x=month;
 month=day;
 day=x;
 printf("%i %i\n", day, month);

    return 0;
}
