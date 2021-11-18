#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int f= 1;
    for(int i = n; i > 0; i --){
        f*=i;
    }
    cout << f << endl;
    system("pause");
    return 0;
}
