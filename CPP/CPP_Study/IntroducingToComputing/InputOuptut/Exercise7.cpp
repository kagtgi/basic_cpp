#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double f, c;
    cout << "Temperature in F: " ;
    cin >> f;
    cout << "\n";
    c = (f-32)*5/9;
    cout << fixed << setprecision(2) << "Temperature in C: " <<  c << endl;
    system("pause");
    return 0;
}