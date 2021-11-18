#include <iomanip>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
    string str[3];
    for(int i = 0; i < 3; i ++){
        cin >> str[i];
    }
    string temp;
    for(int i = 0; i < 2; i ++ ){
        if(strcmp( str[i],str[i+1]) ==1) {
            temp = str[i];
            str[i]= str[i+1];
            str[i+1] = temp;
        }
    }
    for(int i = 0; i < 3; i ++){
        cout << str[i] << endl;
    }
    system("pause");
    return 0;
}