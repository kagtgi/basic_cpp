#include <iostream>
using namespace std;

//create class Student
class Student {
private:
    //class attribue
    string name;
    int age;
    string school;
    int Student_number;
    int 
public: //access modifier
    static int NumberOfStudents; //create static variable, store general information of all objects
    //create static method, only can call static variable in same class
    static void Welcome(){
        cout << "Chao mung den truong hoc";
    }
    static int Count(int NumberOfStudents){
        return NumberOfStudents;
    }
    //class method
    void getInformation(){
       cin >> name >> age;
    }
    void display(){
        cout << "Name: "<< name <<endl << "Age: " << age<<endl;
    }
    int birthday(){
        return 2021-age;
    }
    //create no-arg constructor to create object without constructor
    Student(){

    }
    //create constructor
    Student(int Student_number){
        school = "LHP";
        cout << "Hoc sinh da duoc dang ky";
       this->Student_number = Student_number;
    }
};

int main() {
    Student s1; //create object s1
    //use some method with s1
    s1.getInformation();
    s1.display();
    s1.birthday();
    Student s2( 2152642);
    s2.Welcome();
    Student :: Count(40);
    return 0;
}