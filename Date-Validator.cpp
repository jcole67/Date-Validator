#include <iostream>

using namespace std;

bool isValid(int& month,int& day,int& year);

int main()
{
    
    int month, day, year;
    char slash;
    
    cout << "Enter a date: ";
    cin >> month >> slash >> day >> slash >> year;
    
    if (isValid(month, day, year) == true)
        cout << "Date validated.";
    else
        cout << "Invalid date entered. Changed to " << month << "/" << day << "/" << year;
    return 0;
}

bool isValid (int& month,int& day,int& year)
{
    switch (month) {
        case 1:
            if (day <= 31)
                return true;
            else
                day = (day - 31);
                month = (month + 1);
                return false;
            break;
        case 2:
            break;
        case 3:
            if (day <= 31)
                return true;
            else
                day = (day - 31);
                month = (month + 1);
                return false;
            break;
        case 4:
            if (day <= 30)
                return true;
            else
                day = (day - 30);
                month = (month + 1);
                return false;
            break;
        case 5:
            if (day <= 31)
                return true;
            else
                day = (day - 31);
                month = (month + 1);
                return false;
            break;
        case 6:
            if (day <= 30)
                return true;
            else
                day = (day - 30);
                month = (month + 1);
                return false;
            break;
        case 7:
            if (day <= 31)
                return true;
            else
                day = (day - 31);
                month = (month + 1);
                return false;
            break;
        case 8:
            if (day <= 31)
                return true;
            else
                day = (day - 31);
                month = (month + 1);
                return false;
            break;
        case 9:
            if (day <= 30)
                return true;
            else
                day = (day - 30);
                month = (month + 1);
                return false;
            break;
        case 10:
            if (day <= 31)
                return true;
            else
                day = (day - 31);
                month = (month + 1);
                return false;
            break;
        case 11:
            if (day <= 30)
                return true;
            else
                day = (day - 30);
                month = (month + 1);
                return false;
            break;
        case 12:
            if (day <= 31)
                return true;
            else
                day = (day - 31);
                month = 1;
                year = (year + 1);
                return false;
            break;
    }
}

/* Write a function that takes the current date and corrects the number of days, if it's wrong.
The function must return true if the date passed to it is a valid date and false, if not.
The main function uses the returned value to either print "Date validated", if a valid date was entered or "Invalid date entered. Changed to ", followed by the modified date.
For example: if given 11/31/2020, it will produce 12/1/2020. If given 2/29/2021, it will make it 3/1/2021. But, if 11/29/2020 is entered, it will not change it.

To check the date, the function uses the fact that months 4, 6, 9, 11 have 30 days, month 2 has 28 days in non-leap years and 29 in leap years and the remaining months have 31 days.
A year is a leap year if it's divisible by 400 or if not, it's divisible by 4, but not 100.

Example interaction between the user and the program:
Enter a date: 2/31/2021
Invalid date entered. Changed to  3/3/2021
Another example:
Enter a date: 12/32/2020
Invalid date entered. Changed to  1/1/2021
Another example:
Enter a date:  10/28/2020
Date validated.
Press any key to continue. */
