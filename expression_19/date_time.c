#include <iostream>

using namespace std;

int main()
{
    int date, calendar_day, calendar_month, calendar_year, current_time, hour, minute;
    cout << "Enter date DDMMYYYY and time HHMM :";
    cin >> date >> current_time;
    
    // for exampel 23 is day, 44 is month, 0000 is year, input is 23443900
    calendar_year = date % 10000;
    date = date / 10000;
    calendar_month = date % 100;
    calendar_day = date / 100; 
    cout << "Calendar-Year = " << calendar_year << endl;
    cout << "Calendar-month and data :"<< calendar_month << "," << calendar_day << endl;

    hour = current_time / 100;
    minute = current_time % 100;
    cout << "Hour : " << hour << "Minute : " << minute << endl;
    
    return 0;
}
