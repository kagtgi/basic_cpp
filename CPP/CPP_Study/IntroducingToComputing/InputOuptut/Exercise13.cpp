#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int day, year, week;
    cout << "days = ";
    cin >> day;
    year = day / 365;
    week = ( day %365)/7;
    day = day - year*365 - week*7;
    cout << year << " years " << week << " weeks " << day << " days " << endl;
    system("pause");
    return 0;
}