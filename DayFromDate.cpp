// Aim: To find the day on a given date.
// Author: Kappeta Jaya Chandra Reddy (Github Id: kjcreddy666)

#include<iostream>
using namespace std;

int oddDaysInMonth(int date, int month, int year) {
    static int arr[] = {0,3,3,6,8,11,13,16,19,21,24,26};
    int res = date;
    res += arr[month-1];
    if(month > 2 && year%4==0 && (year%100!=0 || year%400==0)) {
        res++;
    }
    res %= 7;
    return res;
}

int oddDaysInYear(int year) {
    int res=0;
    year--;
    if(year >= 400) {
        year %= 400;
    }
    if(year >= 300) {
        res += year/300;
        year %= 300;
    }
    if(year >= 200) {
        res += (year/200)*3;
        year %= 200;
    }
    if(year >= 100) {
        res += (year/100)*5;
        year %= 100;
    }
    if(year > 0) {
        res += (year/4)*2;
        year -= (year/4);
        res += year;
    }
    res %= 7;
    return res;
}

string Day(int date, int month, int year) {
    int res = oddDaysInMonth(date, month, year) + oddDaysInYear(year) ;
    res %= 7;
    switch(res) {
        case 0 : return "Sunday";
        case 1 : return "Monday";
        case 2 : return "Tuesday";
        case 3 : return "Wednesday";
        case 4 : return "Thursday";
        case 5 : return "Friday";
        case 6 : return "Saturday";
    }
}

int main() {
    int date,month,year;
    cout << "Enter a Date(DD/MM/YYYY) : " ;
    cin >> date >> month >> year ;
    cout << "Day on " << date << "/" << month << "/" << year << " : " << Day(date,month,year) ;

    return 0; 
}
