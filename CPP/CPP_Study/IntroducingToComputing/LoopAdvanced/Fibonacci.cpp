#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a = 0, b = 1, c, i;
    if( n == 1){
        cout << a;
    }
    else{
    for(i = 2; i < n; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    cout << b;
    }
    
}
    
    