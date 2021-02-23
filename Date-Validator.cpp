#include <iostream>

using namespace std;

bool isValid(int& month, int& day, int& year);

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

bool isValid (int& month, int& day, int& year)
{
    switch (month)
    {
        case 1:
            if (day <= 31)
                return true;
            else
                day = (day - 31);
                month = (month + 1);
                return false;
            break;
        case 2:
            if ( (year % 400 == 0) || ( (year % 4 == 0) && (year % 100 != 0) ) )
            {
                if (day <= 29)
                    return true;
                else
                    day = (day - 29);
                    month = (month + 1);
                    return false;
            }
            else
            {
                if (day <= 28)
                    return true;
                else
                    day = (day - 28);
                    month = (month + 1);
                    return false;
            }
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
