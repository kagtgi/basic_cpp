#include <iostream>
#include <math.h>
using namespace std;
int SumofArray(int[] a, int n){
    int sum = 0;
    for(int i = 0; i < n; i ++){
        sum +=a[i];
    }
    return sum;
}
void SquareofArray(int[] a, int n){
    for(int i = 0; i < n; i++){
        a[i]=a[i]*a[i];
    }
}
//Add element x between index k and k-1
void AddToArray(int[] a, int k, int x, int n){
    for (int i = n; i >= k+1; i--){
		a[i] = a[i-1];
	}
	a[k] = x;
	n++;
}
//delete element at index k
void RemoveElement(int[] a, int k, int n){
    for (int i = k; i < n; i++){
		a[i] = a[i+1];
	}
	n--;
}
bool isPrime(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}
int Max(int[] a, int n){
    int max = a[0];
    for(int i = 0; i < n; i ++){
        if (a[i]> max){
            max = a[i];
        }
    }
    return max;
}
int Min(int[] a, int n){
    int min = a[0];
    for(int i = 0; i < n; i ++){
        if (a[i]< min){
            min = a[i];
        }
    }
    return min;
}
void CountingArray(int[] a, int n){
    int b[Max(a[], n)];
    for(int i = 0; i < Max(a[], n); i++){
        b[i]= 0;
    }
    for(int i = 0; i < n; i ++){
        b[a[i]]++;
    }
}
void CheckMonotony(int[] a, int n){
    bool check1 = true; // check increasing
    bool check2 = true; // check decreasing
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i-1]) check1 = false;
        if (a[i] >= a[i-1]) check2 = false;
    }
    if (kt1 || kt2) cout << "YES";
    else cout << "NO";
}
void MergeArray(int[] a, int n, int[] b, int m){ //a and b have been sorted before
    int c[n + m];
    int size = 0; // size of c
    int i = 0, j = 0;
    //compare element of a and b
    while (i < n && j < m){
        if (a[i] < b[j]){
            c[size] = a[i];
            size = size + 1;
            i = i + 1;
        } else {
            c[size] = b[j];
            size = size + 1;
            j = j + 1;
        }
    }
    //add element to c when one array is out of element
    while (i < n){
        c[size] = a[i];
        size = size + 1;
        i = i + 1;
    }
    while (j < m){
        c[size] = b[j];
        size = size + 1;
        j = j + 1;
    }
}
int SumOf2DArray(int[][] a, int n, int m){
    int sum = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			sum += a[i][j];
		}
	}
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0 ; i < n ; i ++){
        cin >> arr[i];
    }
    cout << SumofArray(arr, n);
    system( "pause");
    return 0;
    int e, f;
    cin >> e >> f;
    int Arr2d[e][f];
    for (int i = 0; i < e; i++){
		for (int j = 0; j < f; j++){
			cin >> Arr2d[i][j];
		}
	}
    

}