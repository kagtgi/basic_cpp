#include <iostream>
using namespace std;

int main(){
    float n;
    cout << " n = ";
    cin >> n;
    cout << "\n";
    if( n  > 0){
        cout << n << " is positive\n";
    }
    else if ( n < 0) {
        cout << n << " is negative\n";
    }
    else{
        cout << " n is 0\n";
    }

    system("pause");
    return 0;
}