#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int year;
    cout << "year = ";
    cin >> year;
    cout << "\n";
    if((year % 4 == 0 && year %100!= 0) || (year %400 == 0)){
        cout << year << " is leap year \n";
    }
    else{
        cout << year << " is not leap year \n";
    }

    system("pause");
    return 0;
}