#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    cout << " a = ";
    cin >> a;
    cout << "\n";
    cout << " b = ";
    cin >> b;
    cout << "\n";
    cout << " c = ";
    cin >> c;
    cout << "\n";
    if( a + b >= c || a + c >= b || b + c >= a){
        if( a == b && b == c){
            cout << " Equilateral Triangle\n";
        }
        else if( a == b || b == c || a == c){
            cout << " Isosceles Triangle\n";
        }
        else {
            cout << " Scalene Triangle\n";
        }
    }
    system("pause");
    return 0;
}