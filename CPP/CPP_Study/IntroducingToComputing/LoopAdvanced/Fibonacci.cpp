#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int u= 0; 
    int v = 1;
    int t;
    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
        t = u + v;
        u = v;
        v = t;
    }
    cout << t << endl;
    system("pause");
    return 0;
}