#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b;
    cout<<"a:  ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    int sum = a+ b;
    int minus= a- b;
    int multi = a*b;
    int div = a/b;
    cout << "a + b = " << sum << endl;
    cout << "a - b = " << minus << endl;
    cout << "a x b = " << multi << endl;
    cout << "a / b = " << div << endl;
    system("pause");
    return 0;
}