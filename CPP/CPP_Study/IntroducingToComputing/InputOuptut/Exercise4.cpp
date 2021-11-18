//	Write a program that asks the user to type two integers A and B and exchange the value of A and B. The program should display the new value of A and B.
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << " a = ";
    cin >> a;
    cout << "\n";
    cout << " b = ";
    cin >> b;
    cout << "\n";
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " b = " << b << endl;
    system("pause");
    return 0;
}
