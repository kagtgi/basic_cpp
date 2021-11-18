#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int point;
    cout << "point = ";
    cin >> point;
    cout << "\n";
    if( point >= 90){
        cout << 'A' << endl;
    }
    else if (point >= 80 && point <= 89){
        cout << 'B' << endl;
    }
    else if (point >= 70 && point <= 79){
        cout << 'C' << endl;
    }
    else if (point >=60 && point <= 69){
        cout << 'D' << endl;
    }
    else {
        cout << 'F' << endl;
    }
    system("pause");
    return 0;
}