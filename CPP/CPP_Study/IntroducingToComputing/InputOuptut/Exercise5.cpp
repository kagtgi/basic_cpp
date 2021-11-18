#include <iostream>
#include <string>
using namespace std;

int main(){
    int age, height, weight;
    string name, gender;
    cout << "name : ";
    getline( cin, name);
    cout << " \n";
    cout << " age: ";
    cin >> age;
    cout << "\n";
    cout << " height(cm): ";
    cin >> height;
    cout << "\n";
    cout << " weight(kg): ";
    cin >> weight;
    cout << "\n";
    cout << " gender: ";
    cin >> gender;
    cout << "\n";
    cout << "age :" << age << endl;
    cout << "height :" << height << endl;
    cout << "weight :" << weight << endl;
    cout << "name :" << name << endl;
    cout << "gender :" << gender << endl;
    system("pause");
    return 0;
}