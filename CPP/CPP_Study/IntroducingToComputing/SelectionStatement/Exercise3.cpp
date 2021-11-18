#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float degree;
    cout << " degree= ";
    cin >> degree;
    cout << "\n";
    if( degree > 0 && degree < 90){
        cout << " first quadrant" << endl;
    }
    else if ( degree > 90 && degree < 180){
        cout << "second quadrant" << endl;
    }
    else if ( degree > 180 && degree < 270){
        cout << "third quadrant" << endl;
    }
    else if ( degree > 270 && degree < 360){
        cout << "fourth quadrant" << endl;
    }
    else{
        cout << " invalid degree" << endl;
    }
    system("pause");
    return 0;
}