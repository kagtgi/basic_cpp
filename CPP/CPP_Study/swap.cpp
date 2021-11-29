#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    
    int temp = num1;
    num1 = num2;
    num2 = temp;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    num1^=num2^=num1^=num2; //use boolean XOR

    system( "pause");

    return 0;
    
}