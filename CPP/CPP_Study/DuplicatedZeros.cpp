#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n-1; i >= 0; i--) {
        if (arr[i] == 0 && i != n - 1) {
            for (int j = n - 1; j > i; j--) {
                if (j < n - 1)
                    arr[j + 1] = arr[j];
            }
            arr[i + 1] = 0;
        }
    }
    return 0;
}
