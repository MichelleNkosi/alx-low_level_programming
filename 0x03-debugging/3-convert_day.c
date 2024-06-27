#include "main.h"

/**
 * convert_day - converts day of month to day of year, considering leap years
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day)
{
    int day_of_year = 0;
    int days_in_months[] = {0, 31, 59, 90, 120, 151, 181,
                            212, 243, 273, 304, 334};

    if (month > 2)
    {
        day_of_year = days_in_months[month - 1];
    }
    else
    {
        day_of_year = days_in_months[month - 1];
    }

    day_of_year += day;

    return (day_of_year);
}
