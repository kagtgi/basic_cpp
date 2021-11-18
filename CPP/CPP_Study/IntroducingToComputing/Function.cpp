#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <vector>
using namespace std;
void CheckNumber(int a){
    if( a %2 == 0){
        cout << a << " is even";
    }
    else{
        cout << a << " is odd";
    }
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int Cube(int a){
    return a*a*a;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

string toBinary(int n)
{
    string r;
    while(n!=0){
        r=(n%2==0 ?"0":"1")+r;
        n/=2;
    }
    return r;
}
void PrimeInRange(int n) //using Eratosthenes
{   
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; p++)
        if (prime[p] == true)
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false; // Update all multiples of p
    // Print all prime numbers, which value is true
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

void CircleCheck(int R){
    cout << "Diameter = " << 2*R;
    cout << "Circumference = " << 2*3.14*R;
    cout << "Area = "<< 3.14*R*R;
}
int Square(int n){
    return n*n;
}

void swap( int &a, int &b){
    int temp;
    temp = a;
    a= b;
    b= temp;
}

int max(int arr[], int size){
    int max= arr[0];
    for(int i = 0;i < size; i++){
        if( arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int maxmin(int arra1[], int v)
{
 	int i;
	int result_mm[2];
	result_mm[0]= arra1[0];
	result_mm[1]= arra1[0];
	for (i=1;i<v;i++)
	{
		if(result_mm[0] > arra1[i])
    			result_mm[0]=arra1[i]; //0 is min
		if(result_mm[1]< arra1[i])
  			result_mm[1]= arra1[i]; //1 is max
	}
	return result_mm[2];
}

int reverse(int a){
    int b= 0;
    while( a!=0){
        b = b*10 + a%10;
        a/=10;
    }
}
void CalculatorMenu(){
    int choice, a, b;
    cout << "MENU\n";
    cout << "   1. Add\n";
    cout << "   2. Subtract\n";
    cout << "   3. Multiply\n";
    cout << "   4. Divide\n";
    cout << "   5. Modulus\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;
    cout << "Enter your two numbers: ";
    cin >> a >> b;
    cout << endl;
    switch (choice) {
	case 1:
		cout << "Result: " << a+b << endl;
		break;
	case 2:
		cout << "Result: " << a-b << endl;
		break;
    case 3:
		cout << "Result: " << a*b << endl;
		break;
    case 4:
		cout << "Result: " << a/b << endl;
		break;
    case 5:
		cout << "Result: " << a%b << endl;
		break;
}

int main() {
    cout <<"hello world";
    system("pause");
    return 0;
}