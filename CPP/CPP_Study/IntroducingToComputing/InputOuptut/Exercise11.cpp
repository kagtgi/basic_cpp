#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int n;
    //check odd or even but not using IF-ELSE
    cout << " n= ";
    cin >> n;
    ((n & 1) && printf("odd")) || printf("even"); //use boolean arithmetic
    cout << "\n";
    system("pause");
    return 0;
}