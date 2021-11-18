#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> x >> n;
    int ans1= x;
    double ans2= (double)1/x;
    for(int i = 2; i <=n; i ++){
        ans1 *= x;
    }
    for(int i = -2; i >= -n; i --){
        ans2 = ans2/x;
    }
    cout << fixed << setprecision(5) << ans1 << " " << ans2 << endl;
    system("pause");
    return 0;
}
