#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int choice;
    float c, f;
    cout << "pick choice: ";
    cin >> choice;
    cout << "\n";
    switch (choice){
        case 3:
            break;
        case 1:
            cout << "F to C" << endl;
            cout << "input F :";
            cin >> f;
            cout << "\n";
            c = (f-32)*5/9;
            cout << fixed << setprecision(2) << "C = " << c << endl;
            break;
        case 2:
            cout << "C to F" << endl;
            cout << "input C :";
            cin >> c;
            cout << "\n";
            f = c*9/5 +32;
            cout << fixed << setprecision(2) << "F = " << f << endl;
            break;    

    }
    system("pause");
    return 0;
}