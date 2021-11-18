#include <iostream>
using namespace std;

int main(){
    int n;
    cout << " n = ";
    cin >> n;
    cout << "\n";
    if( n %2 == 0){
        cout << n << " is an even number\n";
    }
    else {
        cout << n << " is an odd number \n";
    }
    system("pause");
    return 0;
}