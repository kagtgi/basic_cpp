#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b, c;
    int max;
    cout << "a = ";
    cin >> a;
    cout << "\n";
    cout << "b = ";
    cin >> b;
    cout << "\n";
    cout << "c = ";
    cin >> c;
    cout << "\n";
    if ( a > b){
        max = a;
    }
    else{
        max = b;
    }
    if ( max < c){
        max = c;
    }
    cout << "Max = " << max << endl;
    system("pause");
    return 0;
}