#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a = 0;
    cout << "Input 5 intergers: " << endl;
    int b;
    cin >> b;
    a+=b;
    cin >> b;
    a +=b;
    cin >> b;
    a +=b;
    cin >> b;
    a +=b;
    cin >> b;
    a +=b;
    cout << fixed << setprecision(2)<< (float)a/5 << endl;
    system("pause");
    return 0;
}