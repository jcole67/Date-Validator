//CS_117_20895SP21V
//Assignment 1
//Jordan Cole

#include <iostream>

using namespace std;

bool isValid(int& month, int& day, int& year);                                  //function to validate or correct user-input date

int main()
{
    int month, day, year;                                                       //declare vars for user-input data
    char slash;                                                                 //declare dummy character to accept '/'
    
    cout << "Enter a date: ";
    cin >> month >> slash >> day >> slash >> year;                              //receive user-input data
    
    if ( (month >= 1) && (month <= 12) )                                        //validate that valid month was entered
    {
        if ( (day >= 1) && (day <= 59) )                                        //validate that valid day was entered
        {
            if (isValid(month, day, year) == true)                              //call function with user-input data
                cout << "Date validated.";                                      //print correct date confirmation
            else
                cout << "Invalid date entered. Changed to " << month << "/" << day << "/" << year;  //print correction of an erroneous date
        }
        else
            cout << "Please enter a vaild day. Try again.";                     //error message for invalid day
    }
    else
        cout << "Please enter a vaild month. Try again.";                       //error message for invalid month
    
    return 0;
}

bool isValid (int& month, int& day, int& year)                                  //function verifies user-input date using known month lengths
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
        case 2:                                                                 //February accounts for leap years
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
        case 12:                                                                //December loops month back around to January when over 31 days
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
