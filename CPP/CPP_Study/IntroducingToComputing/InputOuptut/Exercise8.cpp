#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    float xA, yA, xB, yB;
    double d;
    cout << "xA= " ;
    cin >> xA;
    cout << "\n";
    cout << "yA= " ;
    cin >> yA;
    cout << "\n";
    cout << "xB= " ;
    cin >> xB;
    cout << "\n";
    cout << "yB= " ;
    cin >> yB;
    cout << "\n";
    d= sqrt((xA-xB)*(xA-xB) + (yA- yB)*(yA- yB));
    cout << fixed << setprecision(2) << "Distance AB=  " <<  d << endl;
    system("pause");
    return 0;
}