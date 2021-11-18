#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    char x;
    cout << " Input code";
    cin >> x;
    cout << "\n";
    switch (x) {
	case 'M':
		cout << "Individual is married\n";
		break;
	case 'm':
		cout << "Individual is married\n";
		break;
    case 'D':
		cout << "Individual is divorced\n";
		break;
    case 'd':
		cout << "Individual is divorced\n";
		break;
    case 'W':
		cout << "Individual is widowed\n";
		break;
    case 'w':
		cout << "Individual is widowed\n";
		break;    
	default:
		cout << " An invalid code was entered \n";
		break;
	}

    system("pause");
    return 0;
}