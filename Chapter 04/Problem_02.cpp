#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int reverse = 0;
    while(n > 0) {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    cout << "Reversed number: " << reverse << endl;
// Reverse numbers

    return 0;
}