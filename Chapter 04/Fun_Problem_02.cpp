#include <bits/stdc++.h>

using namespace std;

void fib(int n) {
    int t1 =0;
    int t2 = 1;
    int nextTerm;

    for(int i =1; i <= n; i++) {
        cout << t1 << endl;  // print the current Fibonacci number
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

    }
    return ;


}
int main() {

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    fib(n);


    return 0;
}