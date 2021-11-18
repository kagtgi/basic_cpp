#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int i = 5;
    double x ;
    while(i <90){
        x = (i*3.14)/180;
        cout<< fixed << setprecision(4) << "tan(" << i <<" ) = " << tan(x)<< endl;
        cout<< fixed << setprecision(4) << "sin(" << i <<" ) = " << sin(x)<< endl;
        cout<< fixed << setprecision(4) << "cos(" << i <<" ) = 0" << cos(x)<< endl;
        i +=5;
    }
    system("pause");
    return 0;
}