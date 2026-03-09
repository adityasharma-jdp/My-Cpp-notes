#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int nsp = n - 2; // spaces
    int nst = 1;     // stars

    // Upper part
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= nsp; j++) {
            cout << " ";
        }
        nsp--;
        for (int k = 1; k <= nst; k++) {
            cout << "*";
        }
        nst += 2;
        cout << endl;
    }

    nsp = 1;
    nst = (2 * n) - 3; // to make proper lower part

    // Lower part
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= nsp; j++) {
            cout << " ";
        }
        nsp++;
        for (int k = 1; k <= nst; k++) {
            cout << "*";
        }
        nst -= 2;
        cout << endl;
    }

    return 0;
}
