#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int leap;

leap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

if (month > 2 && leap)
{
day++;
}

switch (month - 1)
{
case 12:
day += 31;
case 11:
day += 30;
case 10:
day += 31;
case 9:
day += 30;
case 8:
day += 31;
case 7:
day += 31;
case 6:
day += 30;
case 5:
day += 31;
case 4:
day += 30;
case 3:
day += 31;
case 2:
day += 28;
case 1:
day += 31;
}

if (!leap && month >= 3)
{
day--;
}

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", leap ? 366 - day : 365 - day);
}
